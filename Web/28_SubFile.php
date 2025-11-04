<?php
    $rno=$_GET["opt"];
    $con=mysqli_connect('localhost','root','','fldb');
    if($con){
        $q1="SELECT * FROM studmarks WHERE rno=$rno";
        $r1=mysqli_query($con,$q1);
        ?>
        <h2>Student Marks</h2>
        <form action="28_SubFile2.php" method="GET" name="myForm">
            <table border="1" cellspacing="0">
                <?php
                    while($row=mysqli_fetch_assoc($r1)){
                        echo "<tr><td>Name</td><td>".$row["name"]."</td></tr>";
                        echo "<tr><td>Roll No</td><td>".$row["rno"]."<input type='hidden' name='rno' value='".$row["rno"]."'></td></tr>";
                        echo "<tr><td>Mark 1</td><td><input type='text' name='m1' value='".$row["mark1"]."'></td></tr>";
                        echo "<tr><td>Mark 2</td><td><input type='text' name='m2' value='".$row["mark2"]."'></td></tr>";
                        echo "<tr><td>Total</td><td><input type='text' name='tot' value='".$row["total"]."' readonly></td></tr>";
                        echo "<tr><td><input type='button' value='Recalculate Total' onclick='total()'></td><td><input type='submit' value='Update'><input type='button' value='Back' onclick='window.history.back()'></td></tr>";
                    }
                ?>
            </table>
        </form>
        <script>
            function total(){
                let m1=parseInt(document.forms["myForm"]["m1"].value);
                let m2=parseInt(document.forms["myForm"]["m2"].value);
                let s=m1+m2;
                document.forms["myForm"]["tot"].value=s;
            }
        </script>
    <?php    
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>