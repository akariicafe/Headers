@class _UIDebugLogNode;

@interface _UIDeepestPreferredEnvironmentSearch : NSObject

@property (nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (retain, nonatomic) _UIDebugLogNode *debugLog;

- (void).cxx_destruct;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)a0 visitedFocusEnvironments:(id)a1;
- (void)_reportDidFindLockedFocusEnvironment:(id)a0;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)a0 source:(id)a1;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)a0;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)a0 result:(long long)a1;
- (void)_reportFoundFocusableItem:(id)a0 inContext:(id)a1;
- (void)_reportStartingSearch;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)a0;
- (id)deepestPreferredFocusableItemForEnvironment:(id)a0 withRequest:(id)a1;

@end
