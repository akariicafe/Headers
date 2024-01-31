@class NSDate;

@interface TRIPBTimestamp : TRIPBMessage

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithDate:(id)a0;
- (id)initWithTimeIntervalSince1970:(double)a0;

@end
