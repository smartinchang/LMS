<center>
<br><br><br><br><br><br><br><br>
<h1>ĐỒNG HỒ BẤM GIỜ</h1>
<div id="setTime">Đặt thời gian: <input type="text" id="hour" size="3" placeholder="Giờ"> : <input type="text" id="minute" size="3" placeholder="Phút"> : <input type="text" id="second" size="3" placeholder="Giây"></div>
<font size="+10"><h1><div id="clock" style="display:none;">00:00:00</div></h1></font>
<br>
<center><button id="start" onclick="startEvent();">Bắt đầu</button> <button id="pause" style="display:none;" onclick="pauseEvent();">Tạm dừng</button> <button id="continue" style="display:none;" onclick="continueEvent();">Tiếp tục</button> <button id="stop" style="display:none;" onclick="stopEvent();">Thoát</button></center>
<script>
 var timer;
 var duration;
 function startEvent()
 {
  if (document.getElementById("hour").value=="")
  {
   alert("Vui lòng nhập số giờ!");
   document.getElementById("hour").focus();
  }
  else if (document.getElementById("minute").value=="")
  {
   alert("Vui lòng nhập số phút!");
   document.getElementById("minute").focus();
  }
  else if (document.getElementById("second").value=="")
  {
   alert("Vui lòng nhập số giây!");
   document.getElementById("second").focus();
  }
  else
  {
   document.getElementById("clock").style.display="block";
   document.getElementById("start").style.display="none";
   document.getElementById("pause").style.display="inline";
   document.getElementById("stop").style.display="inline";
   duration=parseInt(document.getElementById("hour").value)*3600+parseInt(document.getElementById("minute").value)*60+parseInt(document.getElementById("second").value);
   timer=setInterval(checkDuration,1000);
   document.getElementById("setTime").style.display="none";
  }
 }
 function pauseEvent()
 {
  document.getElementById("pause").style.display="none";
  document.getElementById("continue").style.display="inline";
  clearInterval(timer);
 }
 function continueEvent()
 {
  document.getElementById("continue").style.display="none";
  document.getElementById("pause").style.display="inline";
  timer=setInterval(checkDuration,1000);
 }
 function stopEvent()
 {
  document.getElementById("clock").style.display="none";
  document.getElementById("continue").style.display="none";
  document.getElementById("pause").style.display="none";
  document.getElementById("stop").style.display="none";
  document.getElementById("start").style.display="inline";
  clearInterval(timer);
  document.getElementById("setTime").style.display="inline";
 }
 function checkDuration()
 {
  duration--;
  hour=Math.floor(duration/3600);
  minute=Math.floor((duration-hour*3600)/60);
  second=duration-hour*3600-minute*60;
  if (hour>9)
   hour_text=hour;
  else
   hour_text="0"+hour;
  if (minute>9)
   minute_text=minute;
  else
   minute_text="0"+minute;
  if (second>9)
   second_text=second;
  else
   second_text="0"+second;
  document.getElementById("clock").innerHTML=hour_text+" : "+minute_text+" : "+second_text;
  if (duration==0)
   stopEvent();
 }
</script>
</center>
<br><br><br><br><br><br><br><br>