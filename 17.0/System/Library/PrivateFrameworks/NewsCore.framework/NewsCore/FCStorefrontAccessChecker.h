@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (id)initWithPrivateChannelMembershipController:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
