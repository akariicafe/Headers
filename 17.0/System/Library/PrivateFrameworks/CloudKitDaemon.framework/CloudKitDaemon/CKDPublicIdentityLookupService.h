@class CKDIdentityCache, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CKDIdentityCache *cache;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (void)configureRequest:(id)a0;
- (void)removeCacheForLookupInfos:(id)a0;
- (void)scheduleRequest:(id)a0;

@end
