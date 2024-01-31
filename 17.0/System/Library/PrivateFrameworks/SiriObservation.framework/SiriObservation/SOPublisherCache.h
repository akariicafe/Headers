@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SOPublisherCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) SOPublisherCache *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removePublisherForSnapshotType:(Class)a0;
- (id)publisherForSnapshotType:(Class)a0;
- (void)setPublisher:(id)a0 forSnapshotType:(Class)a1;

@end
