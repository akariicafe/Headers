@class NSNumber, NSTimeZone;

@interface HKHRAFibBurdenSevenDaySampleProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *burdenPercentage;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBurdenPercentage:(id)a0 timeZone:(id)a1;

@end
