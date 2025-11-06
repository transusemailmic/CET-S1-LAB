<?php
    include 'connection.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" type="text/css" href="style.css">
    <title>Student Management System</title>
</head>
<body>
    <h1>Student Management System</h1>
    <div class="login_cont">
        <h2 class="login_h">Login</h2>
        <form method="POST" action="home.php" name="myForm">
            <table>
                <tr>
                    <td>Username</td>
                    <td><input type="text" name="user" required></td>
                </tr>
                <tr>
                    <td>Password</td>
                    <td><input type="password" name="pass" required></td>
                </tr>
            </table>
            <input type="submit" value="Login">
        </form>
    </div>
</body>
</html>
