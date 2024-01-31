@class BMBookmarkablePublisher, NSString, BMComputeXPCPublisherClient, BMComputeXPCPublisherStorage, BMDSL, NSObject;
@protocol OS_dispatch_queue;

@interface BMBiomeScheduler : NSObject <BMDSLScheduler> {
    BMComputeXPCPublisherStorage *_bookmarkStorage;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMComputeXPCPublisherClient *client;
@property (readonly, nonatomic) BOOL waking;
@property (retain, nonatomic) NSString *subscriptionIdentifier;
@property (retain, nonatomic) BMBookmarkablePublisher *bpsPublisher;
@property (retain, nonatomic) BMDSL *graph;

+ (id)new;

- (id)init;
- (void)subscribeWithDSLGraph:(id)a0 forSubscriber:(id)a1;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1;
- (id)_updatedPublisherForSubscription:(id)a0;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 storageProvider:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 waking:(BOOL)a2;
- (void)_persistBookmarkForPublisher:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2;
- (void)cancel;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 waking:(BOOL)a3;
- (void)subscribeWithDSLGraph:(id)a0 publisherBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 targetQueue:(id)a1 client:(id)a2 waking:(BOOL)a3 storageProvider:(id /* block */)a4;
- (id)_publisherWithStreamIdentifier:(id)a0 storeEvent:(id)a1;

@end
