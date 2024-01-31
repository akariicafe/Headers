@interface SBHungApplicationTransitionObserver : NSObject {
    unsigned long long _previousLockState;
}

- (void)activate;
- (void)_lockStateDidChange:(id)a0;
- (void)_notifyUserSwitchedAwayFromApplicationSceneEntities:(id)a0 withTransitionType:(long long)a1;
- (BOOL)_transitionContextRepresentsActivatingAppFromAppSwitcher:(id)a0;
- (BOOL)_transitionContextRepresentsActivatingDynamicIslandApp:(id)a0;
- (BOOL)_transitionContextRepresentsActivatingHomeScreen:(id)a0;
- (BOOL)_transitionContextRepresentsArcSwipingToPreviousApp:(id)a0;
- (BOOL)_transitionContextRepresentsTappingBreadcrumbToPreviousApp:(id)a0;
- (void)observeBackgroundingApplicationSceneEntities:(id)a0 withTransitionContext:(id)a1;

@end
