<?php

# task one

// $num_one = -1;
// $num_two = 2.5;

// $let_one = "o";
// $let_two = "z";

// $str = "El%er0";
// $str[$num_one] = $let_one;
// $str[(int)$num_two] = $let_two;

// // Write Your Code Here

// echo $str; // Elzero


# task two

// $str = "Orezle";

// echo ucfirst(strtolower(strrev($str)));

// Elzero

# task three

// $str = 'aAa';
// $num = 3;
// $char = "_";

// Write Your Code Here
// echo str_repeat(strtolower($str).$char, $num);

// aaa_aaa_aaa_

# task four 

// $str = "<div><b>Elzero</b></div>";

// echo strip_tags($str,"<b>");

// <b>Elzero</b>

# task five

// $str = "Elzero Web School";
// $e = "e";
// $o = "O";
// $four = 4;

// echo substr_count($str,$e,$four) ."<br>";
// echo substr_count($str,lcfirst($o),-$four);

// 1
// 2

// # task six

// $chars = ["E", "l", "z", "e", "r", "o"];

// echo implode($chars);

// // Output
// // "Elzero"

# task seven

// $chars = ["E", 1, 2, "l", "z", "E", "R", "o"];

// method one

// function fil_str($chars)
// {
//     $implode_string = "";
//     foreach ($chars as $char) {
//         if (gettype($char) == gettype("string")) {
//             $implode_string = $implode_string . $char;
//         } else {
//             continue;
//         }
//     }
//     return ucfirst(strtolower($implode_string));
// }

// echo fil_str($chars);

// method two

// $implode_string="";
// foreach ($chars as $char) {
//     if (gettype($char) == gettype("string")) {
//         $implode_string = $implode_string . $char;
//     } else {
//         continue;
//     }
    
// }
// echo ucfirst(strtolower($implode_string));

// Output
// "Elzero"
