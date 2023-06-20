<?php

class Solution{
    /**
     * @param Integer $x
     * @return Boolean
     */
    function isPalindromeBruteForce($x) {
        $temp = $x;
        $new = 0;
        while (floor($temp)){
            $d = $temp % 10;
            $new = $new * 10 + $d;
            $temp = $temp/10;
        }
        if($new == $x){
            return "True";
        }else{
            return "False";
        }
    }

    function isPalindromeOptimal($x){
        if($x<0){
            return "False";
        }
        $reversed_num = 0;
        $original_x = $x;
        while (floor($x)>0){
            $reversed_num = ($reversed_num * 10) + ($x%10);
            $x = $x/10;
        }
        if($original_x == $reversed_num){
            return "True";
        }else{
            return "False";
        }
    }
}

$solve = new Solution();
print_r("BruteForce :");
print_r($solve->isPalindromeBruteForce(121));

print_r("Optimal :");
print_r($solve->isPalindromeOptimal(121));