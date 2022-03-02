const express = require('express');
const app = express();
const bodyParser = require('body-parser')
const {readFile, writeFile} = require('fs').promises;
const path = require('path')

const urlencodedParser = bodyParser.urlencoded({ extended: false })

const {getContentType} = require('./gct.js')

const rbjs = require('robotjs');

app.use( express.static( __dirname + '/WiimoteRemove' ));
app.get('/*', async (req, res) => {
	// console.log(req.url);
	try{
		switch(req.url){
			case '/':
				res.header('Content-Type', 'text/html');
				res.send( await readFile('./index.html', 'utf8') );
				break;
			default: 
				try{
					res.header('Content-Type', getContentType( path.extname(req.url) ) );
					res.send( await readFile('.' + req.url) );
				}
				catch(err){
					res.header('Content-Type', 'text/html');
					res.send('404 Fie Not Found');
					throw "404 file not found";
				}
		}
	} catch(err){
		console.log(err);
	}
});
app.post('/keyPressed', urlencodedParser, async(req, res) => {
	// console.log(req.body);
	rbjs.keyToggle(req.body.key, 'down');
	res.status(200).end();
});
app.post('/keyReleased', urlencodedParser, async(req, res) => {
	rbjs.keyToggle(req.body.key, 'up');
	res.status(200).end();
})

app.listen(process.env.PORT || 3000, () => console.log(`App Available`));

