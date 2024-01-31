@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TLKAsyncCache : NSObject

@property (retain) NSCache *cache;
@property (retain, nonatomic) NSMapTable *queuedCompletionHandlers;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)computeObjectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)getCachedObjectIfAvailableForKey:(id)a0;
- (void)getObjectForKey:(id)a0 completionHandler:(id /* block */)a1;

@end
