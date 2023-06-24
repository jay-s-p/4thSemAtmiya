<!-- 23 Write a PHP program to perform CRUD Operation in 
MySQL Database. -->
<!-- Insert :- -->
<?php

include "config.php";
if (isset($_POST['submit'])) {
    $firstName = $_POST['$firstName'];
    $lastName = $_POST['$lastName'];
    $email = $_POST['$email'];

    $sql = "INSERT INTO users 
            ('first_name','last_name','email')
            values
            ('$firstName','$lastName','$email')";

    $result = $conn->query($sql);
    if ($result == TRUE)
        echo "New Record inserted.";
    else
        echo "Error " . $sql . "<br>" . $conn->error;
    $conn->close();
}
?>
<!-- Read :- -->
<?php
include "config.php";
$sql = "SELECT * FROM users";
$result = $conn->query($sql);
?>
<!-- Update -->
<?php
include "config.php";
if (isset($_POST['update'])) {
    $firstName = $_POST['$firstName'];
    $lastName = $_POST['$lastName'];
    $email = $_POST['$email'];

    $sql = "UPDATE users SET 
                first_name = '$firstName', 
                last_name = '$lastName',
                email = '$email'";

    $result = $conn->query($sql);
    if ($result == TRUE)
        echo "Record Updated successfully";
    else
        echo "Error";
    $conn->close();
}
?>
<!-- Delete -->
<?php
    include "config.php";
    if (isset($_GET['id'])) {
        $userId = $_POST['$id'];
    
        $sql = "DELETE from users WHERE id='$userId'";

        $result = $conn->query($sql);
        if ($result == TRUE)
            echo "Record Deleted successfully.";
        else
            echo "Error " . $sql . "<br>" . $conn->error;
        $conn->close();
    }
?>
