@class PKPencilShadowView, NSString, UIPencilInteraction, PKPencilStatisticsManager, UIView, PKHoverController, PKPencilObserverGestureRecognizer;
@protocol PKPencilObserverInteractionDelegate;

@interface PKPencilObserverInteraction : NSObject <PKHoverControllerDelegate, PKPencilObserverGestureRecognizerDelegate, UIPencilInteractionDelegate, UIInteraction> {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { struct *__value_; } __end_cap_; } _inputPoints;
    BOOL _shadowOpacityOverrideIsActive;
    id<PKPencilObserverInteractionDelegate> _delegate;
    double _shadowOpacityOverrideValue;
    PKPencilStatisticsManager *_statisticsManager;
    PKHoverController *_hoverController;
    PKPencilShadowView *_systemShadowView;
    PKPencilObserverGestureRecognizer *_pencilObserver;
    double _timestampForHoverBegan;
    double _timestampForPencilObserverBegan;
    double _timestampForShadowOpacityOverrideChange;
    double _previousActivePencilMinuteTimestamp;
    UIPencilInteraction *_pencilInteraction;
    struct CGPoint { double x; double y; } _currentLocation;
}

@property (weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidEnterBackground:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)didMoveToView:(id)a0;
- (id).cxx_construct;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)pencilInteractionDidTap:(id)a0;
- (void)pencilObserver:(id)a0 didBeginAtPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)disableOpacityOverride;
- (void)hoverController:(id)a0 didBegin:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)hoverController:(id)a0 didUpdate:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)hoverController:(id)a0 intentionalHoverWithDuration:(double)a1;
- (void)hoverControllerDidEnd:(id)a0;
- (void)pencilObserver:(id)a0 didMoveToPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)pencilObserverDidEnd:(id)a0;

@end
