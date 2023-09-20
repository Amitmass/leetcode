<?php
class Solution
{

    /**
     * @param String $s
     * @return Integer
     */
    function romanToInt($s)
    {
        $romanNumbers = [
            'I' => 1,
            'V' => 5,
            'X' => 10,
            'L' => 50,
            'C' => 100,
            'D' => 500,
            'M' => 1000,
        ];
        
       $split = str_split($s);
       for($i=0; $i<count($split); $i++){
        if
       }


    }
}

$solve = new Solution();
$solve->romanToInt('III');