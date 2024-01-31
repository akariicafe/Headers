@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (double)tolerance;
- (double)timeInterval;
- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;
- (id)init;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (id)userInfo;
- (unsigned long long)retainCount;
- (void)invalidate;
- (void)setFireDate:(id)a0;
- (void)fire;
- (void)setTolerance:(double)a0;
- (id)fireDate;
- (BOOL)isValid;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;

@end
