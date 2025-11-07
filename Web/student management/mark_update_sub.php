<?php
    include 'connection.php';
    $rno=$_GET["rno"];
    $m1=$_GET["science"];
    $m2=$_GET["maths"];
    $m3=$_GET["language"];
    $tot=$_GET["tot"];
    if($con){
        $q1="INSERT INTO mark VALUES($rno,$m1,$m2,$m3,$tot)";
        $r1=mysqli_query($con,$q1);
        if($r1){
            echo "<script>alert('Marks Entered Successfully!');window.history.back();window.history.back();</script>";
        }
        else{
            echo "<script>alert('Marks Entry Error');window.history.back();</script>";
        }
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>