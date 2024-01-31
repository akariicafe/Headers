@interface _PFCachedNumber : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)new;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (short)shortValue;
- (id)stringValue;
- (id)retain;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)init;
- (long long)longLongValue;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (id)autorelease;
- (float)floatValue;
- (BOOL)_tryRetain;
- (id)copy;
- (unsigned long long)unsignedLongValue;
- (id)descriptionWithLocale:(id)a0;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (int)intValue;
- (id)description;
- (unsigned long long)unsignedIntegerValue;
- (double)doubleValue;
- (BOOL)_isDeallocating;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (oneway void)release;
- (unsigned char)unsignedCharValue;

@end
