<?php
    include 'connection.php';
    $rno=$_GET["rno"];
    $m1=$_GET["science"];
    $m2=$_GET["maths"];
    $m3=$_GET["language"];
    $tot=$_GET["tot"];
    if($con){
        $q1="UPDATE mark SET science=$m1,maths=$m2,language=$m3,total=$tot WHERE rno=$rno";
        $r1=mysqli_query($con,$q1);
        if($r1){
            echo "<script>alert('Marks Updated Successfully!');window.history.back();window.history.back();</script>";
        }
        else{
            echo "<script>alert('Marks Update Error');window.history.back();</script>";
        }
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>