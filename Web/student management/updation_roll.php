<html>
    <head>
        <title>Update Student</title>
        <link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body style="height:auto">
        <?php
            include 'connection.php';
            $q1="SELECT rno FROM student";
            if($con){
                $r1=mysqli_query($con,$q1);
                ?>
                <div class="reg_cont">
                    <h1 class="reg_title">Update Student</h1>
                    <form action="updation.php" method="GET">
                        <table>
                            <tr><td><label>Select the Roll Number</label></td></tr>
                            <tr><td>
                                <select name="opt">
                                    <option value="0">---Select---</option>
                                    <?php
                                        while($row=mysqli_fetch_assoc($r1)){
                                            echo "<option value='".$row['rno']."'>".$row['rno']."</option>";
                                        }
                                    ?>
                                </select>
                            </td></tr>
                            <tr><td><input type="submit" value="Fetch Student"></td></tr>
                        </table>
                    </form>
                </div>
                <?php
            }
            else{
                echo "<script>alert('Database Connection Error')</script>";
            }
        ?>
    </body>
</html>