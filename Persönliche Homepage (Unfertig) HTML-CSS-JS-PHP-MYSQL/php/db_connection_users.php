<?php

	function establishConnection(){
		$dbhost = "localhost";
		$dbuser = "root";
		$dbpw = "";
		$dbname = "test";
			
		$conn = new mysqli($dbhost, $dbuser, $dbpw, $dbname) or die ("Connection failed: %s\n". $conn -> error);
		return $conn;
		
	}
	
	function closeConnection($conn){
		$conn -> close();
	}
	?>