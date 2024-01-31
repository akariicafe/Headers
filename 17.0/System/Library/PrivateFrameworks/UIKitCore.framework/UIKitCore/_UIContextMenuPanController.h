@class UIViewSpringAnimationBehavior, NSArray, NSString, UIBezierPath, UIView, UIPanGestureRecognizer, _UIVelocityIntegrator;
@protocol _UIContextMenuPanControllerDelegate;

@interface _UIContextMenuPanController : NSObject <UIGestureRecognizerDelegate, _UIContextMenuScrollObservationInteractionDelegate> {
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    double _defaultZPosition;
    UIBezierPath *_menuScrubPath;
    double _currentDistanceToMenuScrubPath;
    struct CGPoint { double x; double y; } _initialLocationInsidePreview;
    BOOL _menuViewIsVisible;
    BOOL _touchEverEnteredMenu;
    BOOL _clientAllowsDismissal;
}

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id<_UIContextMenuPanControllerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSArray *detents;
@property (nonatomic) struct CGPoint { double x; double y; } originalPlatterCenter;
@property (nonatomic) struct CGPoint { double x; double y; } originalMenuCenter;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } menuAnchor;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (weak, nonatomic) UIView *menuView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_handlePanGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateForGestureWithState:(long long)a0 translation:(struct CAPoint3D { double x0; double x1; double x2; })a1 location:(struct CAPoint3D { double x0; double x1; double x2; })a2 allowsDragging:(BOOL)a3;
- (void)_animationsForActionsStyleWithLocation:(struct CAPoint3D { double x0; double x1; double x2; })a0 ended:(BOOL)a1;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CAPoint3D { double x0; double x1; double x2; })a0 location:(struct CAPoint3D { double x0; double x1; double x2; })a1;
- (BOOL)_canBeginDraggingWithTranslation:(struct CAPoint3D { double x0; double x1; double x2; })a0 location:(struct CAPoint3D { double x0; double x1; double x2; })a1;
- (BOOL)_canSwipeDownToDismiss;
- (struct CAPoint3D { double x0; double x1; double x2; })_clampedRubberBandedTranslationForGestureTranslation:(struct CAPoint3D { double x0; double x1; double x2; })a0;
- (id)_currentPlatformMetrics;
- (struct CGVector { double x0; double x1; })_currentPlatterVelocity;
- (double)_dragTearOffThreshold;
- (BOOL)_initialPointInPlatterIsValid;
- (int)_nearestDetentWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (double)_rangeOfMotion;
- (struct CAPoint3D { double x0; double x1; double x2; })_rubberBandedTranslationForGestureTranslation:(struct CAPoint3D { double x0; double x1; double x2; })a0;
- (double)_tearOffSpeedMultiplier;
- (void)_updateForSignificantLayoutChange;
- (void)_updateMenuScrubPathWithLocationIfNecessary:(struct CGPoint { double x0; double x1; })a0;
- (void)_updatePlatterGestureDebugUIWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1 invalidate:(BOOL)a2;
- (void)_updateViewPositionsWithTranslation:(struct CAPoint3D { double x0; double x1; double x2; })a0 location:(struct CAPoint3D { double x0; double x1; double x2; })a1 ended:(BOOL)a2 withVelocity:(BOOL)a3;
- (long long)_userInterfaceIdiom;
- (id)initWithContainerView:(id)a0 platterView:(id)a1 menuView:(id)a2;
- (void)moveToDetentPosition:(long long)a0 updateScrubPath:(BOOL)a1;
- (void)scrollObservationInteraction:(id)a0 didUpdateWithTranslation:(struct CGPoint { double x0; double x1; })a1 location:(struct CGPoint { double x0; double x1; })a2 ended:(BOOL)a3;
- (void)scrollObservationInteraction:(id)a0 willBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
