@class NSArray, NSString;

@interface HKPHQ9Assessment : HKScoredAssessment <_HKScoredRiskAssessment>

@property (readonly, copy, nonatomic) NSArray *answers;
@property (readonly, nonatomic) long long risk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (long long)_riskForAnswers:(id)a0;
+ (long long)_scoreForAnswers:(id)a0;
+ (id)assessmentWithDate:(id)a0 answers:(id)a1 metadata:(id)a2;
+ (id)validateAnswers:(id)a0;

- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)hk_integerValue;
- (void)_setAnswers:(id)a0;
- (void)_setRisk:(long long)a0;
- (id)initWithDate:(id)a0 answers:(id)a1 metadata:(id)a2;

@end
