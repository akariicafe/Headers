@class SBMainDisplaySceneManager, NSString, SBFloatingDockWindowLevelAssertion, NSMutableSet, SBPIPController;
@protocol SBPIPControllerAdapterContextProviding;

@interface SBPIPSceneContentAdapter : NSObject <SBLayoutStateTransitionObserver, SBPIPControllerAdapter> {
    SBPIPController<SBPIPControllerAdapterContextProviding> *_pipController;
    long long _pipContentType;
    NSMutableSet *_trackedPIPBundleIdentifiers;
    SBMainDisplaySceneManager *_sceneManager;
    long long _effectiveEnvironmentMode;
    SBFloatingDockWindowLevelAssertion *_dockWindowLevelAssertion;
    NSMutableSet *_interruptingBundleIdentifiersSinceLastTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)contentTypeForPIPController:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)setPIPController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStoppingOrCancellingPictureForPIPController:(id)a0 applicationWithBundleIdentifier:(id)a1 scenePersistenceIdentifier:(id)a2;
- (BOOL)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)a0;
- (BOOL)shouldStartPictureInPictureForPIPController:(id)a0 applicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)a0;
- (BOOL)pipController:(id)a0 willBeginPIPInterruptionForAssertion:(id)a1;
- (BOOL)isPresentingPictureInPictureForPIPController:(id)a0 applicationBundleIdentifier:(id)a1;
- (void)_recalculateLevelAssertions;
- (id)initWithPIPContentType:(long long)a0 sceneManager:(id)a1;
- (void)pipController:(id)a0 didAddContainerViewController:(id)a1;
- (void)pipController:(id)a0 didUpdateEnhancedWindowingModeEnabled:(BOOL)a1 windowScene:(id)a2;
- (void)pipController:(id)a0 willRemoveContainerViewController:(id)a1;
- (void)windowLevelDidChangeForPIPController:(id)a0;
- (void)windowVisibilityDidChangeForPIPController:(id)a0;

@end
