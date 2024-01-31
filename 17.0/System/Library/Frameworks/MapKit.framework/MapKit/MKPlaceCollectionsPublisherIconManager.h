@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider> {
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}

@property (retain, nonatomic) NSCache *publisherIconCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (id)_iconForPublisherNamed:(id)a0 usingId:(unsigned int)a1 usingContentScale:(double)a2 usingSizeGroup:(unsigned long long)a3 isNightMode:(BOOL)a4;
- (void)iconForPublisherNamed:(id)a0 usingId:(unsigned int)a1 contentScale:(double)a2 onCompletion:(id /* block */)a3;
- (id)iconForPublisherNamed:(id)a0 usingId:(unsigned int)a1 usingContentScale:(double)a2 usingSizeGroup:(unsigned long long)a3 isNightMode:(BOOL)a4;

@end
