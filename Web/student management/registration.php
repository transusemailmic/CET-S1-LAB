<html>
    <head>
        <title>Student Registration</title>
        <link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body style="height:auto">
        <div class="reg_cont">
            <h1 class="reg_title">Student Registration</h1>
            <form action="registration_sub.php" method="GET" name="myForm">
                <table>
                    <tr>
                        <td>Name</td>
                        <td><input type="text" name="name" required></td>
                    </tr>
                    <tr>
                        <td>Roll No</td>
                        <td><input type="text" name="rno" required></td>
                    </tr>
                    <tr>
                        <td>Class</td>
                        <td><input type="text" name="class" required></td>
                    </tr>
                    <tr>
                        <td>Gender</td>
                        <td class="reg_gender">Male <input type="radio" name="sex" value="M" required> Female <input type="radio" name="sex" value="F"></td>
                    </tr>
                    <tr>
                        <td colspan="2"><input type="submit" value="Register"></td>
                    </tr>
                </table>
            </form>
        </div>
    </body>
</html>