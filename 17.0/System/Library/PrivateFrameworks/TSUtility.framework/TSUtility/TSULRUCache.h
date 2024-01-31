@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned long long maxSize;

- (id)allValues;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)p_removeOldestObject;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
