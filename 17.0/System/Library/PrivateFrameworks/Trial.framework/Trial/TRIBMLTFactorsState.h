@class TRIBMLTDeployment;

@interface TRIBMLTFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIBMLTDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)bmltIdentifiers;
- (BOOL)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;
- (id)persisted;

@end
