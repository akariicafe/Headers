@interface PARSmartSearchV1Parameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double weightLast1hour;
@property (readonly, nonatomic) double weightLast1day;
@property (readonly, nonatomic) double weightLast1week;
@property (readonly, nonatomic) double weightLast1month;
@property (readonly, nonatomic) double weightAll;
@property (readonly, nonatomic) double weightMostRecent;
@property (readonly, nonatomic) double weightMinThresholdToSend;

- (id)init;
- (id)initFromLast1hour:(double)a0 last1day:(double)a1 last1week:(double)a2 last1month:(double)a3 all:(double)a4 mostRecent:(double)a5 minThresholdToSend:(double)a6;
- (void)encodeWithCoder:(id)a0;
- (id)initFromBag:(id)a0;
- (id)initWithCoder:(id)a0;

@end
