@class NSString;

@interface ASClientPolicyManager : ASPolicyManager

@property (retain, nonatomic) NSString *powerAssertionGroupIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)a0;
- (void)requestPolicyUpdate;

@end
