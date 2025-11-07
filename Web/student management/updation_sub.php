<?php
    include 'connection.php';
    $rno=$_GET["rno"];
    $name=$_GET['name'];
    $rno=$_GET['rno'];
    $class=$_GET['class'];
    $sex=$_GET['sex'];
    if($con){
        $q1="UPDATE student SET name='$name',class=$class,gender='$sex',rno=$rno WHERE rno=$rno ON UPDATE CASCADE";
        $r1=mysqli_query($con,$q1);
        if($r1){
            echo "<script>alert('Student Deleted Successfully!');window.history.back();window.history.back();window.parent.location.reload();</script>";
        }
        else{
            echo "<script>alert('Student Deletion Error');window.history.back();</script>";
        }
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>