@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUCacheNodeRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

- (id)init;
- (void)registerClass:(Class)a0 forCacheNodeType:(id)a1;
- (void).cxx_destruct;
- (Class)classForCacheNodeType:(id)a0;

@end
