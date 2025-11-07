<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" type="text/css" href="style.css">
        <link rel="icon" type="image/x-icon" href="favicon.png">
        <title>Admin Dashboard</title>
    </head>
    <body>
        <?php
            include 'connection.php';
            if(isset($_POST["user"]) && isset($_POST["pass"])){
                $user=$_POST["user"];
                $pass=$_POST["pass"];
                if(!$con){
                    echo "<script>alert('Connection Failed');window.history.back();</script>";
                }
                else{
                    $q1="SELECT * FROM login WHERE username='$user' AND password='$pass'";
                    $r1=mysqli_query($con,$q1);
                    if(mysqli_num_rows($r1)==0){
                        ?>
                        <script>alert("Username and Password don't match");window.history.back();</script>
                        <?php
                    }
                    else{
                        ?>
                        <div class="home_l1">
                            <div class="l2_1">
                                <h1>Admin Dashboard</h1>
                            </div>
                            <div class="l2_2">
                                <div class="l2_2_1">
                                    <table border="1">
                                        <tr><td><a href="registration.php" target="home_frame">Student Registration</a></td></tr>
                                        <tr><td><a href="mark_entry_roll.php" target="home_frame">Mark Entry</a></td></tr>
                                        <tr><td><a href="mark_update_roll.php" target="home_frame">Mark Update</a></td></tr>
                                        <tr><td><a href="deletion_roll.php" target="home_frame">Delete Student</a></td></tr>
                                        <tr><td><a href="updation_roll.php" target="home_frame">Update Student</a></td></tr>
                                        <tr><td><a href="index.php" target="home_frame">View Progress Card</a></td></tr>
                                        <tr><td><a href="index.php" target="home_frame">View Top Student</a></td></tr>
                                    </table>
                                </div>
                                <div class="l2_2_2">
                                    <iframe name="home_frame" src=""  class="home_frame"></iframe>
                                </div>
                            </div>
                        </div>
                        <?php
                    }
                }
            }
        ?>
</body>
</html>