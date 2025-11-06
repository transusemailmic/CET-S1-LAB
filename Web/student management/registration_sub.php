<?php
    include 'connection.php';
    $studname=$_GET["name"];
    $rno=$_GET["rno"];
    $sex=$_GET["sex"];
    $class=$_GET["class"];
    if($con){
        $q1="SELECT rno FROM student WHERE rno=$rno";
        $q2="INSERT INTO student VALUES($rno,'$studname','$sex',$class)";
        $r1=mysqli_query($con,$q1);
        if(mysqli_num_rows($r1)>0){
            echo "<script>alert('Student already exists!');window.history.back();</script>";
        }
        else{
            $r2=mysqli_query($con,$q2);
            if($r2){
                echo "<script>alert('Student Registered Successfully');window.history.back();</script>";
            }
            else{
                echo "<script>alert('Student Registration Failed!');window.history.back();</script>";
            }
        }
    }
?>