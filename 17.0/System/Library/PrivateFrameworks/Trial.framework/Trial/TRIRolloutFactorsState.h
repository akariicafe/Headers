@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)rolloutIdentifiers;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;
- (id)persisted;

@end
