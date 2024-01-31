@class NSString, NSDictionary;
@protocol GEOConfigStorageReadOnly;

@interface GEOConfigStorageCached : NSObject <GEOConfigStorageReadWrite> {
    long long _source;
    unsigned long long _options;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _cacheLock;
    struct atomic_flag { _Atomic BOOL _Value; } _isResyncing;
    NSDictionary *_cachedValues;
    id<GEOConfigStorageReadOnly> _direct;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;
- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;
- (id)initForSource:(long long)a0;
- (void)resync;

@end
