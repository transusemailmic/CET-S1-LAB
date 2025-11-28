<?php
    include 'connection.php';
    $rno=$_GET["rno"];
    if($con){
        $q1="DELETE FROM student WHERE rno=$rno";
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