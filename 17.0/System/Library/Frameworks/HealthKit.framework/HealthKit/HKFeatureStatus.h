@class HKFeatureOnboardingRecord, NSDictionary;

@interface HKFeatureStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isOnboardingRecordPresent;
@property (readonly, copy, nonatomic) HKFeatureOnboardingRecord *onboardingRecord;
@property (readonly, copy, nonatomic) NSDictionary *requirementsEvaluationByContext;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyUpdatingRequirement:(id)a0 fromRequirements:(id)a1 isSatisfied:(BOOL)a2;
- (id)description;
- (BOOL)includesContext:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOnboardingRecord:(id)a0 requirementsEvaluationByContext:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
