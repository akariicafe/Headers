@interface __NSDate : NSDate {
    double _time;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;

@end
