@interface ICThumbnailCache : NSObject <ICThumbnailCaching> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ persistedCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cacheKeyQueueQos;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cacheKeyQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_objectIdentifiersToCacheKeys;
}

@property (class, nonatomic, readonly) ICThumbnailCache *shared;

- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)invalidateForObjectIdentifiers:(id)a0;
- (id)creationDateFor:(id)a0;

@end
