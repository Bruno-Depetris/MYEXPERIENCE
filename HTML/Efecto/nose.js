window.onload=function(){
	document.onmousemove = function(ev){
	var x = ev.clientX;
	var y =	ev.clientY;
	document.body.style.backgroundPosition = y + 'px' + x + 'px';
	}
}



	