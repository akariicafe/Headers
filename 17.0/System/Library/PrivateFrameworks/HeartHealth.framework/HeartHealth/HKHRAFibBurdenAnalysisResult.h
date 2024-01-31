@class NSNumber;

@interface HKHRAFibBurdenAnalysisResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *burdenPercentage;
@property (nonatomic) BOOL burdenPercentageWasClampedToLowerBound;
@property (readonly, nonatomic) long long unavailabilityReason;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBurdenPercentage:(id)a0 burdenPercentageWasClampedToLowerBound:(BOOL)a1 unavailabilityReason:(long long)a2;

@end
