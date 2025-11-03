<?php
    $name=$_GET["name"];
    $rno=$_GET["rno"];
    $sex=$_GET["sex"];
    $m1=$_GET["m1"];
    $m2=$_GET["m2"];
    $tot=$_GET["tot"];
    $con=mysqli_connect("localhost","root","","fldb");
    if($con){
        $q1="SELECT rno FROM studmarks WHERE rno=$rno";
        $q2="INSERT INTO studmarks VALUES($rno,'$name','$sex',$m1,$m2,$tot)";
        $r1=mysqli_query($con,$q1);
        if(mysqli_num_rows($r1)>0){
            echo "<script>alert('Roll Number already exists!')</script>";
        }
        else{
            $r2=mysqli_query($con,$q2);
            if($r2){
                echo "<script>alert('Roll Number already exists!')</script>";
            }
        }
    }
?>