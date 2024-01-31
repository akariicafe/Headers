@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isContactsWidget;
- (id)_appLaunchScoreForContactsWidget;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)isWidgetSpecialCase;
- (BOOL)_isSleepWidget;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (void).cxx_destruct;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (BOOL)_isAppPredictionsWidget;
- (id)_appLaunchScoreForSleepWidget;

@end
