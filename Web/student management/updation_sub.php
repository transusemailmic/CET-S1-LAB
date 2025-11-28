<?php
    include 'connection.php';
    $rno=$_GET["rno"];
    $name=$_GET['name'];
    $old_rno=$_GET['old_rno'];
    $new_rno=$_GET['new_rno'];
    $class=$_GET['class'];
    $sex=$_GET['sex'];
    if($con){
        $q1="UPDATE student SET name='$name',class=$class,gender='$sex',rno=$new_rno WHERE rno=$old_rno";
        $r1=mysqli_query($con,$q1);
        if($r1){
            echo "<script>alert('Student Updated Successfully!');window.history.back();window.history.back();window.parent.location.reload();</script>";
        }
        else{
            echo "<script>alert('Student Updation Error');window.history.back();</script>";
        }
    }
    else{
        echo "<script>alert('Database Connection Error');window.history.back();</script>";
    }
?>