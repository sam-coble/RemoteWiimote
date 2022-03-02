let keys;
function setup() {
	createCanvas(600,600);
	background(255);
	noFill();
	rect(1,1,width-1, height-1);
	fill(0);
	textSize(100);
	textAlign(CENTER);
	text("Click Here", 300, 350);
	keys = {
		'8': '8',
		'4': '4',
		'6': '6',
		'2': '2',
		'b': 'b',
		'a': 'a',
		'3': '3',
		'h': 'h',
		'4': '4',
		'2': '2',
		'1': '1',
		'q': 'q',
		'e': 'e',
		'd': 'd',
		't': 't',
		'y': 'y',
		'ArrowUp': 'up',
		'ArrowLeft': 'left',
		'ArrowRight': 'right',
		'ArrowDown': 'down',
	};
}

function draw() {
	//
}

function keyPressed() {
	console.log(`${key} PRESSED`);
	if(Object.keys(keys).includes(key)) {
		ajax('/keyPressed').post({
			'key': keys[key],
		}).then(res => {
			console.log(res);
		});
	}
}
function keyReleased() {
	console.log(`${key} RELEASED`);
	if(Object.keys(keys).includes(key)) {
		ajax('/keyReleased').post({
			'key': keys[key],
		}).then(res => {
			console.log(res);
		});
	}
}