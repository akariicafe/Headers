@interface ODIGestaltHlpr : NSObject

+ (id)getSharedInstance;

- (id)copyAnswer:(struct __CFString { } *)a0;
- (BOOL)hasPKASupport;
- (long long)sikaVersion;

@end
