@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface REAppIconCache : RESingleton {
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_init;
- (void).cxx_destruct;
- (void)iconForApplicationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_loadIconForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_loadRemoteIconForIdentifier:(id)a0 completion:(id /* block */)a1;

@end
