<?php

class Solution
{

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSumOptimal($nums, $target)
    {
        $hashMap = [];
        $count = count($nums);
        for ($i = 0; $i < $count; $i++) {
            $secondIndex = $target - $nums[$i];
            if (isset($hashMap[$secondIndex])) {
                return array($hashMap[$secondIndex], $i);
            } else {
                $hashMap[$nums[$i]] = $i;
            }
        }
        return [];
    }

    function twoSumBruteForce($nums, $target) {
        $length = count($nums);
        
        for ($i = 0; $i < $length; $i++) {
            for ($j = $i + 1; $j < $length; $j++) {
                if ($nums[$i] + $nums[$j] === $target) {
                    return [$i, $j];
                }
            }
        }
        
        return [];
    }

}



$solve = new Solution();
print_r("Optimal :");
print_r($solve->twoSumOptimal([2,7,11,15], 18));
print_r("BruteForce :");
print_r($solve->twoSumBruteForce([2,7,11,15], 18));


