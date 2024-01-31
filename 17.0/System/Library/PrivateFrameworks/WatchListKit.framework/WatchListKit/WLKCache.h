@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WLKCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_stack;
    NSMutableDictionary *_dictionary;
    unsigned long long _countLimit;
}

@property unsigned long long countLimit;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)_onQueueRemoveObjectForKey:(id)a0;

@end
