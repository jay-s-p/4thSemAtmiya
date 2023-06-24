<html>
<body>
    <form>
        <input name="inp">
        <input type="submit">
    </form>
</body>
</html>
<?php

try {
    if(isset($_GET['inp'])){
        $number = $_GET['inp'];
        if( $number == "")
        {
            throw new Exception("Please enter the value :(");
        }    
        if ($number < 0) {
            throw new Exception("Negative values are not allowed :(");
        }
        echo 'Your entered number is ' . $_GET['inp'] . " :)";
    }
} 
catch (Exception $e) {
    echo  $e->getMessage();
}

?>