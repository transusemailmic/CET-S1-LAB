<html>
    <head>
        <title>Delete Student</title>
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
                    $q1="SELECT name FROM student WHERE rno=$rno";
                    $r1=mysqli_query($con,$q1);
                    $row=mysqli_fetch_assoc($r1);
                    ?>
                    <div class="reg_cont">
                        <h1 class="reg_title">Delete <?php echo $row["name"] ?> from records?</h1>
                        <form action="deletion_sub.php" method="GET" name="myForm" class="del_form">
                            <input type="hidden" name="rno" value="<?php echo $rno?>">
                            <table cellspacing="0">
                                <tr><td><input type='submit' value='Yes'></td></tr>
                                <tr><td><input type='button' value='No' onclick="window.history.back();"></td></tr>
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