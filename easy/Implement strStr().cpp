/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    if(haystack.length == 0 && needle.length==0) return 0;
    for(var i=0;i<haystack.length;i++){
        for(var j=0, k=i;j<needle.length;j++,k++){
            if(k == haystack.length) break;
            if(haystack[k] != needle[j]) break;
        }
        if(j == needle.length) return i;
    }
    return -1;
};