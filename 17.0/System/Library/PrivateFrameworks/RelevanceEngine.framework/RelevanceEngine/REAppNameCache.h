@class NSLock, NSMutableDictionary;

@interface REAppNameCache : RESingleton {
    NSMutableDictionary *_nameCache;
    NSLock *_lock;
}

- (id)_init;
- (void).cxx_destruct;
- (id)localizedNameForApplicationWithIdentifier:(id)a0;

@end
