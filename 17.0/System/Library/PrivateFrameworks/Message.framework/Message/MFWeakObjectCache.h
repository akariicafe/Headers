@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : NSObject {
    id /* block */ _block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKey:(id)a0 shouldGenerate:(BOOL)a1 wasCached:(BOOL *)a2;
- (id)objectForKey:(id)a0 wasCached:(BOOL *)a1;

@end
