@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (short)shortValue;
- (BOOL)boolValue;
- (long long)integerValue;
- (unsigned long long)hash;
- (long long)longLongValue;
- (const char *)objCType;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (unsigned long long)unsignedLongValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (long long)longValue;
- (Class)classForCoder;
- (void)getValue:(void *)a0;
- (int)intValue;
- (id)description;
- (unsigned long long)unsignedIntegerValue;
- (double)doubleValue;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)unsignedCharValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
