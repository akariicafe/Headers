@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary *_backgroundActivityIdentifiersToRecentScenes;
    NSMutableDictionary *_backgroundActivityIdentifiersToRecentSceneResetTimers;
}

- (BOOL)_isUILocked;
- (void).cxx_destruct;
- (id)_workspace;
- (void)_addRecentlyTappedApplicationDestinations:(id)a0 forBackgroundActivityWithIdentifier:(id)a1;
- (id)_allApplicationDestinationsForApplications:(id)a0;
- (id)_appDestinationForNextSceneToVisitForApps:(id)a0 andBackgroundActivityWithIdentifier:(id)a1;
- (id)_foregroundApplicationDestinationsForApplications:(id)a0;
- (id)_handlerForBackgroundActivityWithIdentifier:(id)a0;
- (id)_handlerForBackgroundActivityWithIdentifier:(id)a0 orOutApplications:(id *)a1;
- (BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_recentlyTappedApplicationDestinationsForBackgroundActivityWithIdentifier:(id)a0;
- (void)_resetRecentlyTappedSceneIdentifiersForBackgroundActivityWithIdentifier:(id)a0;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForBackgroundActivityWithIdentifier:(id)a0;
- (BOOL)canHandleTapForBackgroundActivityWithIdentifier:(id)a0;
- (BOOL)handleTapForBackgroundActivityWithIdentifier:(id)a0;

@end
