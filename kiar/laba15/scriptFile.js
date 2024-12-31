const div = document.createElement('div');

const body = document.body;
body.appendChild(div);

const img = document.createElement('img');
img.src = 'https://static.vecteezy.com/system/resources/thumbnails/002/592/172/small/smile-emoji-pop-art-line-style-icon-free-vector.jpg';

div.appendChild(img);

const img2 = document.createElement('img');
img2.src = 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQMo5R0Ac0_kxTULsJszBDZ3ozH4CaMes8foA&usqp=CAU';

div.appendChild(img2);



const button1 = document.getElementsByTagName('img')[0];
function mouseenter(event){
    const descr = 'Сма́йлик, смайл (англ. smiley — «улыбчивый» и непосредственное название такого значка) или счастливое лицо (☺/☻/🙂) — стилизованное графическое изображение улыбающегося человеческого лица; традиционно изображается в виде жёлтого круга с двумя чёрными точками, представляющими глаза, и чёрной дугой, символизирующей рот.';
    if (descr){
        const tooltip = document.createElement('div');
        tooltip.textContent= descr;

    tooltip.style.position = 'absolute';
    tooltip.style.top = event.clientY + 'px';
    tooltip.style.left = event.clientX + 'px';
    tooltip.style.backgroundColor = 'rgba(0, 0, 0, 0.8)';
    tooltip.style.color = 'white';
    tooltip.style.padding = '5px';

        document.body.appendChild(tooltip);

        button1.addEventListener('mouseleave', function() {
            document.body.removeChild(tooltip);
          });
    }
}
button1.addEventListener('mouseenter', function(event) {
    mouseenter(event);
  });

const button2 = document.getElementsByTagName('img')[1];
function mouseclick(event)
{
    button2.style.border = '10px solid red';
}

button2.addEventListener('click', function(event){
    mouseclick(event);
});






const img3 = document.createElement('img');
img3.src = 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSf2bm7MXn3yTlJGtWDABfV1YKc3pxy1MU89w&usqp=CAU';

div.appendChild(img3);

const img4 = document.createElement('img');
img4.src = 'https://cdn-icons-png.flaticon.com/512/569/569513.png';

div.appendChild(img4);

const button3 = document.getElementsByTagName('img')[3];

function mouseon(event) {
  button3.src = img3.src;
}

button3.addEventListener('mouseover', function(event) {
  mouseon(event);
});

function mouseoff() {
  button3.src = 'https://cdn-icons-png.flaticon.com/512/569/569513.png';
}

button3.addEventListener('mouseleave', function() {
  mouseoff();
});