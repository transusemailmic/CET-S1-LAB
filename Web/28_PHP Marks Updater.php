<html>
    <head>
        <title>Student Marks Updater</title>
    </head>
    <body>
        <h2>Student Mark Updater</h2>
        <?php
            $con=mysqli_connect('localhost','root','','fldb');
            $q1="SELECT rno FROM studmarks";
            if($con){
                $r1=mysqli_query($con,$q1);
                ?>
                <form action="28_SubFile.php" method="GET">
                    <label>Select the Roll Number</label>
                    <select name="opt">
                        <option value="">---Select---</option>
                        <?php
                            while($row=mysqli_fetch_assoc($r1)){
                                echo "<option value='".$row['rno']."'>".$row['rno']."</option>";
                            }
                        ?>
                        <input type="submit">
                </form>
                <?php
            }
            else{
                echo "<script>alert('Database Connection Error')</script>";
            }
        ?>
    </body>
</html>