@class NSString, TRIExperimentDeployment;

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment;
@property (readonly, nonatomic) NSString *treatmentId;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)experimentIdentifiers;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeployment:(id)a0 treatmentId:(id)a1;
- (BOOL)_isEqualToState:(id)a0;
- (id)persisted;

@end
