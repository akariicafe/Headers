@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)loadDockAppListWithError:(id *)a0;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)homeScreenWidgetPersonalities;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)_filePathForTodayPage;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (id)prettyPrintedJSON;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (void).cxx_destruct;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)_filePathForDockConfig;
- (id)_filePathForHomeScreenPageConfig;
- (long long)numOnboardingStacksOnTheHomeScreen;

@end
