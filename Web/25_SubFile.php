<?php
    $name=$_GET["name"];
    $regno=$_GET["regno"];
    $class=$_GET["class"];
    $gender=$_GET["gender"];
    $mark1=$_GET["mark1"];
    $mark2=$_GET["mark2"];
    $mark3=$_GET["mark3"];
    $total=$_GET["total"];
?>
<html>
    <head>
        <title>Progress Report for <?php echo $name ?></title>
        <style>
            h2{
                font-family: calibri;
                font-size: 30px;
                color:chocolate;
            }
            table{
                font-family: calibri;
                font-size: 20px;
                color:cadetblue;
            }
            table tr td:nth-of-type(1){
                background-color:azure;
                text-align: right;
                padding-right: 30px;
            }
            table tr td:nth-of-type(2){
                color:brown;
            }
        </style>
    </head>
    <body>
        <h2>Progress Report for <?php echo "<i>".$name."</i>" ?></h2>
        <table>
            <tr>
                <td>Name</td>
                <td><?php echo $name ?></td>
            </tr>
            <tr>
                <td>Register Number</td>
                <td><?php echo $regno; ?></td>
            </tr>
            <tr>
                <td>Class</td>
                <td><?php echo $class; ?></td>
            </tr>
            <tr>
                <td>Gender</td>
                <td><?php echo $gender; ?></td>
            </tr>
            <tr>
                <td>Mark 1</td>
                <td><?php echo $mark1; ?></td>
            </tr>
            <tr>
                <td>Mark 2</td>
                <td><?php echo $mark2; ?></td>
            </tr>
            <tr>
                <td>Mark 3</td>
                <td><?php echo $mark3; ?></td>
            </tr>
            <tr>
                <td>Total</td>
                <td><?php echo $total; ?></td>
            </tr>
        </table>
    </body>
</html>