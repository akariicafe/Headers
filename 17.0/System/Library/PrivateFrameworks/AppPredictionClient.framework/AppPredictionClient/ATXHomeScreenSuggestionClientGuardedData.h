@class NSHashTable, NSString, ATXHomeScreenCachedSuggestions, NSArray, NSSet, NSMutableDictionary, NSDictionary, ATXInformationStore, NSMutableArray, NSObject, ATXHomeScreenEventLogger, ATXWidgetSuggestionDismissManager;
@protocol OS_dispatch_source;

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {
    NSHashTable *observers;
    NSObject<OS_dispatch_source> *rotationSuppressionTimer;
    NSObject<OS_dispatch_source> *layoutUpdateSuppressionTimer;
    BOOL isUserInteractingWithProactiveWidget;
    NSSet *knownHomeScreenProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownHomeScreenWidgetUniqueIdsAtTimeOfBlending;
    NSSet *knownTodayPageProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownTodayPageWidgetUniqueIdsAtTimeOfBlending;
    ATXHomeScreenCachedSuggestions *suppressedSuggestions;
    NSMutableDictionary *appPanelIdentifierToPageIndex;
    NSDictionary *previousSuggestedSuggestionWidgetLayouts;
    NSDictionary *currentSuggestionWidgetLayouts;
    NSDictionary *currentAppPredictionPanelLayouts;
    NSDictionary *currentStackSuggestions;
    NSMutableArray *currentFallbacks;
    NSMutableDictionary *pagesToUsedFallbackAppSuggestions;
    NSString *currentBlendingCacheId;
    NSMutableArray *stacksAffectedByDebugRotation;
    NSArray *stagedHomeScreenPageConfigurations;
    NSSet *stagedDockAppList;
    NSArray *stagedTodayPageStacks;
    NSArray *stagedTodayPagePanels;
    ATXInformationStore *store;
    ATXHomeScreenEventLogger *logger;
    ATXWidgetSuggestionDismissManager *widgetDismissManager;
}

- (void).cxx_destruct;

@end
