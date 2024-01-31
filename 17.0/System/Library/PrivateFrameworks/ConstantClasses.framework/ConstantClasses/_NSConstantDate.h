@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;
- (oneway void)release;

@end
