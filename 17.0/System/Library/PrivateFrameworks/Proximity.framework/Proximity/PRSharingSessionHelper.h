@interface PRSharingSessionHelper : NSObject

+ (unsigned long long)NSDataToUInt64:(id)a0;
+ (id)NSDataMacToUUID:(id)a0;
+ (id)ProxToString:(long long)a0;
+ (long long)CoarseRangeToProx:(int)a0;
+ (id)HexStringToNSDataMac:(const void *)a0;
+ (int)ProxToCoarseRange:(long long)a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })UIntToHexString:(unsigned long long)a0 len:(unsigned long long)a1;
+ (id)UUIDStringToNSDataMac:(const void *)a0 len:(unsigned long long)a1;
+ (id)UUIDToNSDataMac:(id)a0 len:(unsigned long long)a1;
+ (id)convertMacStringToNSData:(const void *)a0;
+ (id)reverseNSData:(id)a0;

@end
