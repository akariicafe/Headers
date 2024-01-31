@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
