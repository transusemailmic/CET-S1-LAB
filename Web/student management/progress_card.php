<html>
    <head>
        <title>View Student Progress Card</title>
        <link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body style="height:auto">
        <?php
            include 'connection.php';
            $rno=$_GET["opt"];
            if($rno=="0"){
                echo "<script>alert('Please select a roll number');window.history.back();</script>";
            }
            else{
                if($con){
                    $q1="SELECT student.*,mark.* FROM student INNER JOIN mark ON student.rno=mark.rno WHERE student.rno=$rno";
                    $r1=mysqli_query($con,$q1);
                    $row=mysqli_fetch_assoc($r1);
                    ?>
                    <div class="reg_cont">
                        <h1 class="reg_title">Progress Card for <?php echo $row["name"] ?></h1>
                        <form action="updation_sub.php" method="GET" name="myForm" class="del_form">
                            <table cellspacing="0">
                                <?php
                                    echo "<tr><td>Name</td><td>".$row["name"]."</td></tr>";
                                    echo "<tr><td>Roll No</td><td>".$row["rno"]."</td></tr>";
                                    echo "<tr><td>Class</td><td>".$row["class"]."</td></tr>";
                                    echo "<tr><td>Gender</td><td>".($row["gender"]=="M"?"Male":"Female")."</td></tr>";
                                    echo "<tr><td>Science</td><td>".$row["science"]."</td></tr>";
                                    echo "<tr><td>Maths</td><td>".$row["maths"]."</td></tr>";
                                    echo "<tr><td>Language</td><td>".$row["language"]."</td></tr>";
                                    echo "<tr><td>Total</td><td>".$row["total"]."</td></tr>";
                                ?>
                            </table>
                        </form>
                    </div>
                    <?php 
                }
                else{
                    echo "<script>alert('Database Connection Error');window.history.back();</script>";
                }
            }
        ?>
    </body>
</html>