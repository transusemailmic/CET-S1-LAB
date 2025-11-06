<html>
    <head>
        <title>Student Mark Entry</title>
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
                        <h1 class="reg_title">Student Mark Entry</h1>
                        <form action="mark_entry_sub" method="GET" name="myForm">
                            <table cellspacing="0">
                                <?php
                                    while($row=mysqli_fetch_assoc($r1)){
                                        echo "<tr><td>Name</td><td>".$row["name"]."</td></tr>";
                                        echo "<tr><td>Roll No</td><td>".$row["rno"]."<input type='hidden' name='rno' value='".$row["rno"]."'></td></tr>";
                                        echo "<tr><td>Science</td><td><input type='text' name='science'></td></tr>";
                                        echo "<tr><td>Maths</td><td><input type='text' name='maths'></td></tr>";
                                        echo "<tr><td>Language</td><td><input type='text' name='language'></td></tr>";
                                        echo "<tr><td>Total</td><td><input type='text' name='tot' readonly></td></tr>";
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
                    <?php    
                    }
                    else{
                        echo "<script>alert('Database Connection Error');window.history.back();</script>";
                    }
                }
            ?>
        </div>
    </body>
</html>