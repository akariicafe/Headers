@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider

@property (readonly, nonatomic) HMUser *user;

- (id /* block */)filter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0 serviceTypes:(id)a1;
- (id)initWithHome:(id)a0 user:(id)a1;
- (id)invalidationReasons;

@end
