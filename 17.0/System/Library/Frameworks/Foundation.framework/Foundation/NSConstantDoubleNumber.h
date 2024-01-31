@interface NSConstantDoubleNumber : NSNumber {
    double _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (short)shortValue;
- (id)retain;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)init;
- (long long)longLongValue;
- (void)dealloc;
- (unsigned long long)retainCount;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (id)autorelease;
- (float)floatValue;
- (BOOL)_tryRetain;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)copy;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (int)intValue;
- (unsigned long long)unsignedIntegerValue;
- (double)doubleValue;
- (BOOL)_isDeallocating;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (oneway void)release;
- (unsigned char)unsignedCharValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
