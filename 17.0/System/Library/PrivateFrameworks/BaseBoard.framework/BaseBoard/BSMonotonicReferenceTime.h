@interface BSMonotonicReferenceTime : NSObject {
    double _startTimeStamp;
}

@property (readonly, nonatomic) double timeIntervalSinceNow;
@property (readonly, nonatomic) double timeIntervalToNow;

+ (id)now;
+ (id)distantPast;
+ (id)distantFuture;
+ (id)referenceTimeForDate:(id)a0;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)a0;

- (id)date;
- (double)timeIntervalSinceReferenceTime:(id)a0;

@end
