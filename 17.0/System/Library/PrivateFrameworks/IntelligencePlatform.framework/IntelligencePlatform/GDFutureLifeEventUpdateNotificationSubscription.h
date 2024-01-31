@class GDInternalViewUpdateNotificationSubscription;

@interface GDFutureLifeEventUpdateNotificationSubscription : NSObject

@property (retain, nonatomic) GDInternalViewUpdateNotificationSubscription *viewUpdateNotificationSubscription;

- (void)cancelSubscription;
- (void).cxx_destruct;
- (id)initWithSystemwideUniqueSubscriptionIdentifier:(id)a0 targetQueue:(id)a1 onReceiveUpdateNotificationBlock:(id /* block */)a2;

@end
