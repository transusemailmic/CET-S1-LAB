<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" type="text/css" href="style.css">
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
                        <script>alert("Username and Password don't match")</script>
                        <?php
                    }
                    else{
                        ?>
                        <h1>Admin Dashboard</h1>
                        <?php
                    }
                }
            }
        ?>
</body>
</html>