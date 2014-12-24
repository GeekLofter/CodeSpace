#! /usr/bin/env python
#coding:utf-8


import os
import sys
import re
import string


def IsAllNumberLessThanLimitNumber(number_list, limit_number):
    for number in number_list:
        if int(number) > limit_number:
            return False
    return True
    

def CHECK_DexRGB(dexRGB):
    '''
    check dexRBG if is valid format
    '''
    pattern = re.compile(r'^\d{0,3},\d{0,3},\d{0,3}$')
    match_result = re.match(pattern, dexRGB)
    
    if match_result:
        dexRGB_list = match_result.group(0).split(',')
        if IsAllNumberLessThanLimitNumber(dexRGB_list, 255):
            return True
    return False


def ConvertDex2Hex(dex):
    '''
    convert dex number to hex number
    '''
    return hex(dex)

def SplitDexRgb(dexRgb)    :
    '''
    split dexRgb(as string) 
    '''
    return dexRgb.split(',')    # 

    
def RGB_ConvertDex2Hex(dexRgb):
    '''
    dexRgb
    '''
    if (not CHECK_DexRGB(dexRgb)):
        print "\"{}\" is not correct RGB value or not corrent format".format(dexRgb)
        return
    list_dexRbg = SplitDexRgb(dexRgb)
    HexRgb = []
    for dex in list_dexRbg:
        HexRgb.append(ConvertDex2Hex(int(dex)))

    return string.join(HexRgb, ',')

def main():
    try:
        dexRgb = sys.argv[1]                        #
        return RGB_ConvertDex2Hex(dexRgb)
    except IndexError:
        print "Please Input DexRgb"
    
if __name__ == '__main__':
    print main()
