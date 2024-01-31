@class WFAQIScale, NSMutableDictionary;

@interface WFAQIScaleCacheManager : NSObject

@property (class, readonly, nonatomic) WFAQIScaleCacheManager *sharedManager;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (readonly, nonatomic) NSMutableDictionary *aqiScaleCache;
@property (readonly, nonatomic) WFAQIScale *defaultScale;

- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (void)_persistInfoToDisk;
- (id)_persistedInfoFromDisk;
- (id)_persistedInfoURL;
- (id)cachedScaleFromIdentifier:(id)a0;
- (void)updateCacheWithScale:(id)a0 identifier:(id)a1;

@end
