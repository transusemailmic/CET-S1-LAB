<html>
    <head>
        <title>Update Student</title>
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
                    $q1="SELECT * FROM student WHERE rno=$rno";
                    $r1=mysqli_query($con,$q1);
                    ?>
                    <div class="reg_cont">
                        <h1 class="reg_title">Update Student</h1>
                        <form action="updation_sub.php" method="GET" name="myForm" class="del_form">
                            <table cellspacing="0">
                                <?php
                                    while($row=mysqli_fetch_assoc($r1)){
                                        echo "<tr><td>Name</td><td><input type='text' name='name' value='".$row["name"]."' required></td></tr>";
                                        echo "<tr><td>Roll No</td><td><input type='text' name='new_rno' value='".$row["rno"]."' required></td></tr>";
                                        echo "<input type='hidden' name='old_rno' value='".$row["rno"]."' required>";
                                        echo "<tr><td>Class</td><td><input type='text' name='class' value='".$row["class"]."' required></td></tr>";
                                        echo "<tr><td>Gender</td><td class='reg_gender'>Male <input type='radio' name='sex' value='M' ".($row["gender"]=="M"?"checked":"")." required> Female <input type='radio' name='sex' value='F' ".($row["gender"]=="F"?"checked":"")."></td></tr>";
                                        echo "<tr><td colspan='2'><input type='submit' value='Update'></td></tr>";
                                    }
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