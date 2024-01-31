@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification

@property (readonly, nonatomic) RTAccount *latestAccount;
@property (readonly, nonatomic) RTAccount *oldAccount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLatestAccount:(id)a0 oldAccount:(id)a1;

@end
