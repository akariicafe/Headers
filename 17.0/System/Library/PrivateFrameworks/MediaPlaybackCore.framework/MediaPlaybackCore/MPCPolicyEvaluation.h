@class NSString;

@interface MPCPolicyEvaluation : NSObject

@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation;
@property (nonatomic) long long policyType;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) BOOL canBeOverriden;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
