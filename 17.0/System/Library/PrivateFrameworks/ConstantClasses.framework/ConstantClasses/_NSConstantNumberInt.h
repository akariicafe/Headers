@interface _NSConstantNumberInt : _NSConstantNumber

- (short)shortValue;
- (BOOL)boolValue;
- (long long)integerValue;
- (long long)longLongValue;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (int)intValue;
- (double)doubleValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;

@end
