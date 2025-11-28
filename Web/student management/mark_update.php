<html>
    <head>
        <title>Student Mark Update</title>
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
                    if(mysqli_num_rows($r1)>0){
                        ?>
                        <div class="reg_cont">
                            <h1 class="reg_title">Student Mark Update</h1>
                            <form action="mark_update_sub.php" method="GET" name="myForm">
                                <table cellspacing="0">
                                    <?php
                                        while($row=mysqli_fetch_assoc($r1)){
                                            echo "<tr><td>Name</td><td>".$row["name"]."</td></tr>";
                                            echo "<tr><td>Roll No</td><td>".$row["rno"]."<input type='hidden' name='rno' value='".$row["rno"]."'></td></tr>";
                                            echo "<tr><td>Science</td><td><input type='text' name='science' value='".$row["science"]."'></td></tr>";
                                            echo "<tr><td>Maths</td><td><input type='text' name='maths'value='".$row["maths"]."'></td></tr>";
                                            echo "<tr><td>Language</td><td><input type='text' name='language' value='".$row["language"]."'></td></tr>";
                                            echo "<tr><td>Total</td><td><input type='text' name='tot' readonly required></td></tr>";
                                            echo "<tr><td colspan='2'><input type='button' value='Calculate Total' onclick='total()'> </td></tr>";
                                            echo "<tr><td colspan='2'><input type='submit' value='Enter'></td></tr>";
                                        }
                                    ?>
                                </table>
                            </form>
                            <script>
                                function total(){
                                    let m1=parseInt(document.forms["myForm"]["science"].value);
                                    let m2=parseInt(document.forms["myForm"]["maths"].value);
                                    let m3=parseInt(document.forms["myForm"]["language"].value);
                                    let s=m1+m2+m3;
                                    document.forms["myForm"]["tot"].value=s;
                                }
                            </script>
                        </div>
                        <?php    
                    }
                    else{
                        echo "<script>alert('Enter Marks First');window.history.back();</script>";
                    }
                }
                else{
                    echo "<script>alert('Database Connection Error');window.history.back();</script>";
                }
            }
        ?>
    </body>
</html>