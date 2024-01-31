@class FBSceneManager, NSString, SBWorkspaceKeyboardFocusController, SBSystemGestureManager, _UIKBProductivityPanGestureRecognizer, SBGestureDefaults, _UIKBProductivityPinchGestureRecognizer, _UIKBProductivitySingleTapGesture, _UIKBProductivityLongPressGestureRecognizer, SBProductivityGestureEducationController, _UIKBProductivityDoubleTapGesture;
@protocol BSDefaultObserver;

@interface SBProductivityGestureController : NSObject <UIGestureRecognizerDelegate> {
    FBSceneManager *_sceneManager;
    SBSystemGestureManager *_systemGestureManager;
    SBWorkspaceKeyboardFocusController *_focusController;
    SBGestureDefaults *_gestureDefaults;
    id<BSDefaultObserver> _gestureDefaultsObserver;
    SBProductivityGestureEducationController *_educationController;
    _UIKBProductivitySingleTapGesture *_threeFingerSingleTap;
    _UIKBProductivityDoubleTapGesture *_threeFingerDoubleTap;
    _UIKBProductivityPanGestureRecognizer *_threeFingerSlide;
    _UIKBProductivityLongPressGestureRecognizer *_threeFingerLongPress;
    _UIKBProductivityPinchGestureRecognizer *_threeFingerPinch;
    double _initPinchableDistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_enabledForCurrentAppScenes;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)_focusedSceneForAction;
- (void)_setupGestureRecognizers;
- (long long)slideDirectionWithGesture:(id)a0;
- (void)handleProductivityGesture:(id)a0;
- (void)_tearDownGestureRecognizers;
- (long long)_educationTypeForGesture:(id)a0 direction:(long long)a1;
- (void).cxx_destruct;
- (long long)_orientationOfFocusedSceneForGesture:(id)a0;
- (id)initWithSystemGestureManager:(id)a0 focusController:(id)a1 gestureDefaults:(id)a2 gestureEducationController:(id)a3;
- (void)_evaluateEnablement;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
