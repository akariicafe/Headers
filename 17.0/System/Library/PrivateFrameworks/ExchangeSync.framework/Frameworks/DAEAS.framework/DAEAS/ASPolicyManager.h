@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject

@property (nonatomic) BOOL updatingPolicy;
@property (weak, nonatomic) id<ASPolicyManagerDelegate> delegate;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)currentPolicyKey;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)a0;
- (void)requestPolicyUpdate;

@end
