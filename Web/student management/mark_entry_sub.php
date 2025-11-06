<?php
    $rno=$_GET["rno"];
    $m1=$_GET["m1"];
    $m2=$_GET["m2"];
    $tot=$_GET["tot"];
    $con=mysqli_connect('localhost','root','','fldb');
    if($con){
        $q1="UPDATE studmarks SET mark1=$m1,mark2=$m2,total=$tot WHERE rno=$rno";
        $r1=mysqli_query($con,$q1);
        if($r1){
            echo "<script>alert('Marks Updated Successfully!');window.location='28_PHP Marks Updater.php';</script>";
        }
        else{
            echo "<script>alert('Mark Updation Error');window.history.back();</script>";
        }
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>