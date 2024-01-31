@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _LTDConfigurationCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_conditions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_errorForType:(long long)a0 reason:(unsigned long long)a1;

- (id)init;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)objectForType:(long long)a0 completion:(id /* block */)a1;
- (id)objectForType:(long long)a0 error:(id *)a1;
- (void)removeObjectForType:(long long)a0;
- (void)setObject:(id)a0 forType:(long long)a1 ttl:(double)a2 completion:(id /* block */)a3;

@end
