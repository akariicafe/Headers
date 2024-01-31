@class AMAmbientDefaults, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMUILastSelectedPosterStore : NSObject {
    AMAmbientDefaults *_ambientDefaults;
    NSMutableDictionary *_cachedLastSelectedConfigurations;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
}

+ (id)new;

- (id)init;
- (void)_synchronize;
- (void).cxx_destruct;
- (id)initWithAmbientDefaults:(id)a0;
- (unsigned long long)_currentChargerIds;
- (unsigned long long)_maximumChargerIds;
- (void)_performWithSelectedConfigurationsForChargerIdentifier:(id)a0 block:(id /* block */)a1;
- (void)_performWithSelectedConfigurationsForChargerIdentifier:(id)a0 onlyIfPresent:(BOOL)a1 block:(id /* block */)a2;
- (id)lastSelectedConfigurationUUIDForChargerIdentifier:(id)a0 providerBundleIdentifier:(id)a1;
- (void)setLastSelectedConfigurationUUID:(id)a0 forChargerIdentifier:(id)a1 providerBundleIdentifier:(id)a2;

@end
