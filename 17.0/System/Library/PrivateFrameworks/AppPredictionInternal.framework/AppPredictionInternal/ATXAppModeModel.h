@class ATXAppInterruptionsEventProvider, ATXModeAffinityModelsConstants, MLModel, ATXAppNotificationEngagementEventProvider, ATXGlobalAppModeAffinityModel, ATXModeEntityStore, ATXNotificationAndSuggestionDatastore;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppModeModel : NSObject {
    unsigned long long _mode;
    MLModel *_appModeModel;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
    ATXAppNotificationEngagementEventProvider *_appNotificationEngagementEventProvider;
    ATXAppInterruptionsEventProvider *_appInterruptionsEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    ATXModeAffinityModelsConstants *_modeAffinityModelsConstants;
}

- (id)modelName;
- (void).cxx_destruct;
- (id)scoredEntities;
- (void)addGlobalModeAffinityPriorsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addAppInterruptingSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)a0;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (id)featuresToModel:(id)a0;
- (id)initWithMode:(unsigned long long)a0 modeEntityStore:(id)a1 globalAppModeAffinityModel:(id)a2;
- (id)loadAppModeCoreMLModel;
- (double)scoreFromAppFeatures:(id)a0;
- (id)scoredAppModeEntityWithAppFeatures:(id)a0 bundleId:(id)a1;

@end
