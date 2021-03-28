<center>
<br><br><br><br><br><br><br><br>
<h1>QUAY SỐ NGẪU NHIÊN</h1>
<div id="setTime">Quay từ số: <input type="text" id="min" size="10" placeholder="Số nhỏ nhất"> đến số <input type="text" id="max" size="10" placeholder="Số lớn nhất"></div>
<font size="+10"><h1><div id="number">0</div></h1></font>
<br>
<center><button id="start" onclick="startEvent();">Bắt đầu</button></center>
<script>
 var duration;
 var timer;
 function startEvent()
 {
  if (document.getElementById("min").value=="")
  {
   alert("Vui lòng nhập số tối thiểu!");
   document.getElementById("min").focus();
  }
  else if (document.getElementById("max").value=="")
  {
   alert("Vui lòng nhập số tối đa!");
   document.getElementById("max").focus();
  }
  else
  {
   document.getElementById("start").style.display="none";
   duration=0;
   timer=setInterval(checkDuration,250);
  }
 }
 function checkDuration()
 {
  duration+=1;
  range=parseInt(document.getElementById("max").value)-parseInt(document.getElementById("min").value)+1;
  document.getElementById("number").innerHTML=Math.floor(Math.random()*range)+parseInt(document.getElementById("min").value);
  if (duration==20)
  {
   document.getElementById("start").style.display="block";
   clearInterval(timer);
  }
 }
</script>
</center>
<br><br><br><br><br><br><br><br>