@class SBHomeGestureSettings, NSOrderedSet, NSString, NSMutableOrderedSet, NSSet, SBApplicationController, NSTimer;
@protocol SBRecentDisplayItemsControllerDelegate, BSInvalidatable;

@interface SBRecentDisplayItemsController : NSObject <SBAppInteractionEventSourceObserving> {
    NSMutableOrderedSet *_recentDisplayItems;
    long long _removalPersonality;
    long long _movePersonality;
    NSSet *_relevantTransitionFromSources;
    unsigned long long _maxDisplayItems;
    SBApplicationController *_appController;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    NSTimer *_delayAfterTransitionTimer;
    SBHomeGestureSettings *_homeGestureSettings;
}

@property (copy, nonatomic) NSOrderedSet *recentDisplayItems;
@property (weak, nonatomic) id<SBRecentDisplayItemsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (void)eventSource:(id)a0 userDeletedWebBookmark:(id)a1;
- (void).cxx_destruct;
- (void)eventSource:(id)a0 didBeginTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)_clearDelayAfterTransitionTimer;
- (void)_addDisplayItemToFront:(id)a0;
- (void)_addOrMoveDisplayItemToFront:(id)a0;
- (id)_addStateCaptureHandler;
- (id)_allDisplayItemsForBundleID:(id)a0;
- (id)_allDisplayItemsForUniqueID:(id)a0;
- (id)_allDisplayItemsForWebClipID:(id)a0;
- (id)_allDisplayItemsPassingTest:(id /* block */)a0;
- (void)_allowAppToAppearWhileHidden:(id)a0;
- (void)_applicationsBecameHidden:(id)a0;
- (id)_associatedWebClipIdentifierForAppClipIdentifier:(id)a0 sceneIdentifier:(id)a1;
- (void)_disallowAppFromAppearingWhileHidden:(id)a0;
- (BOOL)_displayItem:(id)a0 matchesBundleID:(id)a1;
- (id)_displayItemForLayoutElement:(id)a0;
- (BOOL)_displayItemIsExecutableOnCurrentPlatform:(id)a0;
- (BOOL)_displayItemRepresentsAppClip:(id)a0;
- (id)_firstDisplayItemForBundleID:(id)a0;
- (id)_firstDisplayItemForUniqueID:(id)a0;
- (BOOL)_isDisallowedDisplayItem:(id)a0;
- (void)_moveDisplayItemToFront:(id)a0;
- (void)_removeDisplayItem:(id)a0;
- (void)_setupDelayAfterTransitionTimerForActivatingElement:(id)a0;
- (id)_webClipForIdentifier:(id)a0;
- (void)eventSource:(id)a0 applicationsBecameHidden:(id)a1;
- (void)eventSource:(id)a0 applicationsBecameVisible:(id)a1;
- (void)eventSource:(id)a0 didFinishTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)eventSource:(id)a0 keyboardFocusChangedToApplication:(id)a1;
- (void)eventSource:(id)a0 userDeletedApplications:(id)a1;
- (void)eventSource:(id)a0 userQuitApplicationInSwitcher:(id)a1;
- (void)eventSource:(id)a0 userRemovedSuggestions:(id)a1;
- (id)initWithRemovalPersonality:(long long)a0 movePersonality:(long long)a1 transitionFromSources:(id)a2 maxDisplayItems:(unsigned long long)a3 eventSource:(id)a4 applicationController:(id)a5;
- (void)removeDisplayItem:(id)a0;

@end
