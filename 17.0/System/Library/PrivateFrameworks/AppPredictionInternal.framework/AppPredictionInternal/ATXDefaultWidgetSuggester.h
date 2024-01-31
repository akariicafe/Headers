@class _ATXAppLaunchHistogramManager;

@interface ATXDefaultWidgetSuggester : NSObject {
    _ATXAppLaunchHistogramManager *_histogramManager;
}

- (void).cxx_destruct;
- (BOOL)shouldSuggestTV;
- (double)_appLaunchCountForAppBudleId:(id)a0;
- (double)_intentDonationCountForActionKey:(id)a0;
- (double)_upcomingMediaCountForAppBundleId:(id)a0 isInternalApplication:(BOOL)a1;
- (double)appLaunchCountForTVApp;
- (id)initWithHistogramManager:(id)a0;
- (double)intentDonationCountForTVApp;
- (double)upcomingMediaCountForTVApp;

@end
