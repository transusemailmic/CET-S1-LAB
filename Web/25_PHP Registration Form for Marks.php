<html>
    <head>
        <title>Mark Entering Form</title>
    </head>
    <body>
        <h2>Mark Entering Form</h2>
        <form method="GET" name="markForm" action="25_SubFile.php">
            <table>
                <tr>
                    <td>Name</td>
                    <td><input type="text" name="name"></td>
                </tr> 
                <tr>
                    <td>Reg. No.</td>
                    <td><input type="text" name="regno"></td>
                </tr>
                <tr>
                    <td>Class</td>
                    <td><input type="text" name="class"></td>
                </tr>         
                <tr>
                    <td>Gender</td>
                    <td><input type="text" name="gender"></td>
                </tr> 
                <tr>
                    <td>Mark1</td>
                    <td><input type="text" name="mark1"></td>
                </tr> 
                <tr>
                    <td>Mark2</td>
                    <td><input type="text" name="mark2"></td>
                </tr>
                <tr>
                    <td>Mark3</td>
                    <td><input type="text" name="mark3"></td>
                </tr> 
                <tr>
                    <td colspan="2"><input type="button" value="Calculate Total Marks" onclick="calculate()"></td>
                </tr>
                <tr>
                    <td>Total</td>
                    <td><input type="text" name="total" readonly></td>
                </tr> 
                <tr>
                    <td><input type="reset"></td>
                    <td><input type="submit"></td>
                </tr>
            </table>
        </form>
        <script>
            function calculate(){
                let m1=parseInt(document.forms["markForm"]["mark1"].value);
                let m2=parseInt(document.forms["markForm"]["mark2"].value);
                let m3=parseInt(document.forms["markForm"]["mark3"].value);
                let mtot=m1+m2+m3;
                document.forms["markForm"]["total"].value=mtot;
            }
        </script>
    </body>
</html>