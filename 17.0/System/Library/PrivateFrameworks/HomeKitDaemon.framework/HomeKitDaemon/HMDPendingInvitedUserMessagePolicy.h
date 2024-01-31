@class HMDHomeManager;

@interface HMDPendingInvitedUserMessagePolicy : HMFMessagePolicy

@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;

- (id)init;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
