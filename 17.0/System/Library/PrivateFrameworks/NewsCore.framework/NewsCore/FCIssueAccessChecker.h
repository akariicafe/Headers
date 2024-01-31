@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccessCheckers:(id)a0;

@end
