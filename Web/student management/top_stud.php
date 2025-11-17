<html>
    <head>
        <title>View Top Student</title>
        <link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body style="height:auto">
        <?php
            include 'connection.php';
            $q1="SELECT student.*, mark.* FROM student INNER JOIN mark ON student.rno = mark.rno WHERE mark.total = (SELECT MAX(total) FROM mark);";
            if($con){
                $r1=mysqli_query($con,$q1);
                $row=mysqli_fetch_assoc($r1);
                ?>
                <div class="reg_cont">
                    <h1 class="reg_title"><?php echo $row['name']." (Roll No: ".$row['rno'].")<br> is the toppest student<br> with total marks ".$row['total'] ?></h1>
                </div>
                <?php
            }
            else{
                echo "<script>alert('Database Connection Error')</script>";
            }
        ?>
    </body>
</html>