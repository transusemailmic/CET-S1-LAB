<html>
    <head>
        <title>Student Marks Entry</title>
    </head>
    <body>
        <form action="27_SubFile.php" method="GET" name="myForm">
            <h2>Student Data Entry</h2>
            <table border="1" cellspacing="0">
                <tr>
                    <td>Name</td>
                    <td><input type="text" name="name"></td>
                </tr>
                <tr>
                    <td>Roll No</td>
                    <td><input type="text" name="rno"></td>
                </tr>
                <tr>
                    <td>Gender</td>
                    <td>Male <input type="radio" name="sex" value="M"> Female <input type="radio" name="sex" value="F"></td>
                </tr>
                <tr>
                    <td>Mark 1</td>
                    <td><input type="text" name="m1"></td>
                </tr>
                <tr>
                    <td>Mark 2</td>
                    <td><input type="text" name="m2"></td>
                </tr>
                <tr>
                    <td>Total</td>
                    <td><input type="text" name="tot" readonly id="tdisp"></td>
                </tr>
                <tr>
                    <td colspan="2"><center><input type="button" onclick="total()" value="Get Total"> <input type="submit"></center></td>
                </tr>
            </table>
        </form>
        <script>
            function total(){
                let a=parseInt(document.forms["myForm"]["m1"].value);
                let b=parseInt(document.forms["myForm"]["m2"].value);
                let s=a+b;
                document.forms["myForm"]["tot"].value=s;
            }
        </script>
    </body>
</html>