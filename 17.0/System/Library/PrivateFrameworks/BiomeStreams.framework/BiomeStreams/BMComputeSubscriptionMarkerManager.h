@class NSCountedSet, BMComputeXPCPublisherStorage;

@interface BMComputeSubscriptionMarkerManager : NSObject

@property (readonly, nonatomic) NSCountedSet *activelySubscribedStreams;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *systemStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *userStorage;
@property (readonly, nonatomic) unsigned long long domain;

- (void).cxx_destruct;
- (id)_subscriptionMarkerStorageForDomain:(unsigned long long)a0;
- (void)addSubscriptionWithStreamIdentifier:(id)a0;
- (id)initWithUserStorage:(id)a0 systemStorage:(id)a1 domain:(unsigned long long)a2;
- (void)removeSubscriptionWithStreamIdentifier:(id)a0;

@end
