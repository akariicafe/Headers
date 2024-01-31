@class ATXWatchFaceConfigurationCollector, ATXComplicationSuggestionParameters, BMAppLaunchStream, ATXHomeScreenConfigCache;

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}

- (id)init;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)inputDescriptionForSignal:(id)a0 complicationAppBundleIds:(id)a1;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToPriors:(id)a2 widgetAppBundleIdsOnHomeScreen:(id)a3;
- (id)_scoredComplicationBundleIdsForModularSet:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToPriors:(id)a2 widgetAppBundleIdsOnHomeScreen:(id)a3 complicationBundleIdCountsOnWatch:(id)a4;
- (void).cxx_destruct;
- (id)scoredComplicationBundleIdsForModularSet:(id)a0;

@end
