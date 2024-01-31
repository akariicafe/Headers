@class VSSubscriptionPersistentContainer, NSString, VSRemoteNotifier, VSSubscriptionPredicateFactory;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer;
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_fetchRequest;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)a0;
- (void)dealloc;
- (id)_securityTaskForCurrentConnection;
- (void)_performBlock:(id /* block */)a0;
- (void)registerSubscription:(id)a0;
- (void)_sendRemoteNotification;
- (void)removeSubscriptions:(id)a0;
- (long long)_saveChangesToContext:(id)a0 withDate:(id)a1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)a0 withEntity:(id)a1 forFiltering:(BOOL)a2;
- (void)_installedAppsDidChange:(id)a0;
- (void)removeSubscriptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerSubscription:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_saveChangesToContext:(id)a0;
- (id)_subscriptionEntity;

@end
