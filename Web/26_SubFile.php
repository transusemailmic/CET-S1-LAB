<?php
    $name=$_GET["name"];
    $rno=$_GET["rno"];
    $mark=$_GET["mark"];
    $con=mysqli_connect('localhost','root','','fldb');
    if($con)
        echo "Sucess";
    else
        echo "Failure";
    $q1="INSERT INTO stud VALUES($rno,'$name',$mark)";
    if(mysqli_query($con,$q1))
        echo "<script>alert('Data Inserted Successfully')</script>";
    else
        echo "<script>alert('Data Insertion Failed')</script>";
?>