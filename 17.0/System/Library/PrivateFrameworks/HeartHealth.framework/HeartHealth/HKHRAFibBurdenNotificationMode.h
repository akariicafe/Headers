@class NSNumber, NSUUID, NSDateInterval;

@interface HKHRAFibBurdenNotificationMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL shouldForwardToWatch;
@property (readonly, nonatomic) NSNumber *currentPercentage;
@property (readonly, nonatomic) NSNumber *currentValueClamped;
@property (readonly, nonatomic) NSDateInterval *currentValueDateInterval;
@property (readonly, nonatomic) NSUUID *currentValueUUID;
@property (readonly, nonatomic) NSNumber *previousPercentage;
@property (readonly, nonatomic) NSNumber *previousValueClamped;
@property (readonly, nonatomic) NSNumber *previousTimeZoneDiffersFromCurrent;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 shouldForwardToWatch:(BOOL)a1 currentPercentage:(id)a2 currentValueClamped:(id)a3 currentValueDateInterval:(id)a4 currentValueUUID:(id)a5 previousPercentage:(id)a6 previousValueClamped:(id)a7 previousTimeZoneDiffersFromCurrent:(id)a8;

@end
