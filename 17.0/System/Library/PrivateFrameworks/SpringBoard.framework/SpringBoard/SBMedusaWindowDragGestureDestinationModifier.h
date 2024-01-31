@class CADisplayLink, SBSwitcherModifierEventResponse, SBAppLayout;
@protocol SBMedusaWindowDragGestureDestinationModifierDelegate;

@interface SBMedusaWindowDragGestureDestinationModifier : SBSwitcherModifier {
    SBAppLayout *_selectedLeafAppLayout;
    SBAppLayout *_initialMainAppLayout;
    SBAppLayout *_initialFloatingAppLayout;
    long long _initialFloatingConfiguration;
    unsigned long long _gesturePhase;
    BOOL _supportsMedusa;
    BOOL _supportsCenterRole;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    CADisplayLink *_displayLink;
    unsigned long long _dragPauseCounter;
    BOOL _isResizingToFullScreen;
    BOOL _hasResizedEnoughToUnblur;
    BOOL _dragBeganInOtherSwitcher;
    BOOL _dragBeganInOurSwitcher;
    id<SBMedusaWindowDragGestureDestinationModifierDelegate> _dragDestinationDelegate;
    SBSwitcherModifierEventResponse *_pendingEnterPlatterZoneResponse;
}

@property (readonly, nonatomic, getter=hasEnteredPlatterZone) BOOL enteredPlatterZone;
@property (readonly, nonatomic) unsigned long long currentDestination;
@property (readonly, nonatomic) SBAppLayout *currentAppLayout;
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;

- (void)_displayLinkFired:(id)a0;
- (id)proposedAppLayoutForWindowDrag;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)_contentDraggingCommandeerWidth;
- (struct CGSize { double x0; double x1; })_fullscreenActivationRegionSize;
- (double)_contentDraggingFloatingActivationWidth;
- (double)_contentDraggingSideActivationWidth;
- (double)_dismissLeftBoundary;
- (double)_dismissRightBoundary;
- (BOOL)_draggingCenterWindow;
- (BOOL)_draggingFullScreenApp;
- (BOOL)_draggingSlideOverApp;
- (BOOL)_draggingSplitViewApp;
- (BOOL)_isDragOverFullscreenRegionAtLocation:(struct CGPoint { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_isDragOverSideGutterRegionsAtLocation:(struct CGPoint { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 totalContentDragGutterWidth:(double)a2;
- (long long)_layoutRoleForDraggedApp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftFloatingZoneForCenterWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightFloatingZoneForCenterWindow;
- (BOOL)_shouldMinimizeOrEnterSplitHomeScreen;
- (double)_sideActivationGutterSize;
- (id)_transitionRequestForDestination:(unsigned long long)a0 complete:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_universalCenterZone;
- (void)_updateCurrentDropAction;
- (id)_updateForWindowDrag;
- (id)handleGestureEvent:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)initWithSelectedLeafAppLayout:(id)a0 initialMainAppLayout:(id)a1 initialFloatingAppLayout:(id)a2 initialFloatingConfiguration:(long long)a3 delegate:(id)a4;

@end
