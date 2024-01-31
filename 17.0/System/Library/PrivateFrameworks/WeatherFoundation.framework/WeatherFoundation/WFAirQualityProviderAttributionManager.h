@class WFAirQualityProviderAttribution, NSMutableDictionary;

@interface WFAirQualityProviderAttributionManager : NSObject

@property (class, readonly, nonatomic) WFAirQualityProviderAttributionManager *sharedManager;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSMutableDictionary *attributionCache;
@property (readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;

- (id)init;
- (void).cxx_destruct;
- (id)cachedAttributionForProvider:(id)a0;
- (void)loadAttributionForProvider:(id)a0 completion:(id /* block */)a1;
- (id)p_archivedDataForProviderAttribution:(id)a0;
- (void)p_updateCacheWithProviderAttribution:(id)a0;
- (void)registerProviderAttribution:(id)a0;

@end
