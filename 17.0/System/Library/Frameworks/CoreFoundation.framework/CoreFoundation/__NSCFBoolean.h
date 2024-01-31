@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (short)shortValue;
- (id)stringValue;
- (id)retain;
- (BOOL)boolValue;
- (unsigned long long)_cfTypeID;
- (long long)integerValue;
- (unsigned long long)hash;
- (long long)longLongValue;
- (unsigned long long)retainCount;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (BOOL)_tryRetain;
- (long long)compare:(id)a0;
- (unsigned long long)unsignedLongValue;
- (id)descriptionWithLocale:(id)a0;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (int)intValue;
- (id)description;
- (unsigned long long)unsignedIntegerValue;
- (double)doubleValue;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (oneway void)release;
- (unsigned char)unsignedCharValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNumber:(id)a0;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;

@end
