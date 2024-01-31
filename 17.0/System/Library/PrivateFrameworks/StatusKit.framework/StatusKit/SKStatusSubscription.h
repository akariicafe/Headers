@class SKPublishedStatus, SKStatusSubscriptionDaemonConnection, NSString, NSArray, SKHandle, SKStatusSubscriptionMetadata;

@interface SKStatusSubscription : NSObject

@property (readonly, nonatomic) SKHandle *ownerHandle;
@property (readonly, nonatomic) SKStatusSubscriptionMetadata *subscriptionMetadata;
@property (readonly, nonatomic) SKStatusSubscriptionDaemonConnection *daemonConnection;
@property (readonly, nonatomic) SKPublishedStatus *currentStatus;
@property (readonly, nonatomic) NSString *subscriptionIdentifier;
@property (readonly, nonatomic) NSArray *ownerHandles;
@property (readonly, nonatomic, getter=isPersonalStatusSubscription) BOOL personalStatusSubscription;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (void)releaseTransientSubscriptionAssertionWithCompletion:(id /* block */)a0;
- (void)retainTransientSubscriptionAssertionWithCompletion:(id /* block */)a0;
- (id)_ownerHandlesDescription;
- (void)deleteSubscriptionWithCompletion:(id /* block */)a0;
- (id)initWithSubscriptionMetadata:(id)a0 daemonConnection:(id)a1;
- (void)releasePersistentSubscriptionAssertionForApplicationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retainPersistentSubscriptionAssertionForApplicationIdentifier:(id)a0 completion:(id /* block */)a1;

@end
