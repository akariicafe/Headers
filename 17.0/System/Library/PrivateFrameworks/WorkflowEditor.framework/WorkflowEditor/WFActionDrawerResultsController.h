@class HMHome, WFActionDrawerResults, WFWorkflow, WFActionRegistry, NSObject, WFContextualActionSuggester;
@protocol OS_dispatch_queue;

@interface WFActionDrawerResultsController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFActionRegistry *actionRegistry;
@property (readonly, nonatomic) WFActionDrawerResults *cachedSiriSuggestionsResults;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFContextualActionSuggester *actionSuggester;
@property (readonly, nonatomic) HMHome *home;

+ (id)localizedAppNames;

- (id)actions;
- (void).cxx_destruct;
- (id)homes;
- (id)actionsForCategory:(id)a0;
- (id)initWithActionRegistry:(id)a0 home:(id)a1 workflow:(id)a2 actionSuggester:(id)a3;
- (BOOL)filteringForResidentCompatibleActions;
- (void)getContextualSuggestionsForCurrentActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getHomeSectionsIncludingRelatedActions:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getResultsForAllActionsWithCompletionHandler:(id /* block */)a0;
- (void)getResultsForAllAppActionsWithCompletionHandler:(id /* block */)a0;
- (void)getResultsForAppWithBundleIdentifier:(id)a0 legacyIdentifier:(id)a1 shouldFilterForAppsViewController:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getResultsForCategory:(id)a0 completionHandler:(id /* block */)a1;
- (void)getResultsForFavorites:(id /* block */)a0;
- (void)getResultsForSearchQuery:(id)a0 includingSiriSuggestedResults:(id)a1 completionHandler:(id /* block */)a2;
- (void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getSiriSuggestedResultsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)suggestedCategoriesForContentClasses:(id)a0;

@end
