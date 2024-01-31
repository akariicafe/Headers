@class NSArray, HKMCCycleSegment, NSString, NSNumber;

@interface HKMCCycle : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKMCCycleSegment *menstruationSegment;
@property (readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment;
@property (readonly, nonatomic) long long ovulationConfirmationType;
@property (readonly, nonatomic) long long ovulationConfirmationFailure;
@property (readonly, nonatomic) long long dailyEligibleWristTemperatureCount;
@property (readonly, copy, nonatomic) NSNumber *lastDayIndex;
@property (readonly, copy, nonatomic) NSArray *cycleFactors;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)_cycleWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2;
+ (id)_cycleWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2 ovulationConfirmationType:(long long)a3 ovulationConfirmationFailure:(long long)a4 dailyEligibleWristTemperatureCount:(long long)a5 cycleFactors:(id)a6;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2 ovulationConfirmationType:(long long)a3 ovulationConfirmationFailure:(long long)a4 dailyEligibleWristTemperatureCount:(long long)a5 cycleFactors:(id)a6;

@end
