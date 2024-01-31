@class NSDictionary;

@interface HKStringCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_cacheDictionary;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cachedStringIfAvailable:(id)a0;
- (id)dictionaryReplacingKeysFromDictionary:(id)a0;
- (void)unittest_resetCache;
- (void)updateCacheWithStrings:(id)a0;

@end
