@class NSDate;

@interface OSLogPosition : NSObject

@property (readonly, nonatomic) long long precision;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double offset;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithEventSource:(id)a0 timeIntervalSinceEnd:(double)a1;
- (id)initWithTimeIntervalSinceLatestBoot:(double)a0;

@end
