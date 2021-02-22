<html>
 <head>
  <title>Hệ thống Quản lý Học tập</title>
 </head>
 <body>
  <h1>Câu hỏi trắc nghiệm</h1>
  <button onclick="Start()">Bắt đầu</button>
  <script>
   function Start()
   {
	var t=6
	document.getElementById("duration").innerHTML = "Thời gian còn lại: "+t+" giây";
	setTimeout(CheckTime,1000);
   }
   function CheckTime()
   {
	t--;
	document.getElementById("duration").innerHTML = "Thời gian còn lại: "+t+" giây";
   }
  </script>
  <br><br>
  <div id="duration"></div>
  <?php
   $suggestion="Câu hỏi";
   $choices=array();
   array_push($choices,array(1,"Lựa chọn thứ nhất"));
   array_push($choices,array(2,"Lựa chọn thứ hai"));
   array_push($choices,array(3,"Lựa chọn thứ ba"));
   array_push($choices,array(4,"Lựa chọn thứ tư"));
   array_push($choices,array(5,"Lựa chọn thứ năm"));
   shuffle($choices);
   echo "<form name=\"question\">";
   echo "<h2>".$suggestion."</h2>";
   for ($i=0;$i<count($choices);$i++)
   {
    echo "<input type=\"checkbox\" value=\"".$choices[$i][0]."\"><label>".$choices[$i][1]."</label><br>";
   }
   echo "<br>";
   echo "<input type=\"button\" value=\"Chọn\">";
   echo "</form>";
  ?>
 </body
</html>