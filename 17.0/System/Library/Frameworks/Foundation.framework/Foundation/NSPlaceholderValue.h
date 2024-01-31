@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (const char *)objCType;
- (id)autorelease;
- (BOOL)_tryRetain;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (void)getValue:(void *)a0;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)initWithCoder:(id)a0;

@end
