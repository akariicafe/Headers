@interface ICSDuration : NSObject <NSSecureCoding> {
    double _duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)durationFromICSString:(id)a0;
+ (id)durationFromRFC2445UTF8String:(const char *)a0;
+ (id)generateDurationFromICSString:(id)a0;

- (double)timeInterval;
- (long long)minutes;
- (BOOL)isNegative;
- (void)encodeWithCoder:(id)a0;
- (long long)hours;
- (long long)seconds;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)days;
- (long long)weeks;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)initWithWeeks:(long long)a0 days:(long long)a1 hours:(long long)a2 minutes:(long long)a3 seconds:(long long)a4;

@end
