@class NSLock, NSMutableDictionary;

@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (id)init;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
