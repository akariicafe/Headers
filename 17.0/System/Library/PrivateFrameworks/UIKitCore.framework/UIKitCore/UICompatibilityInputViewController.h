@class NSArray, UILayoutGuide, NSString, UIKeyboardInputMode, UIKeyboard, UIViewController;
@protocol UITextCursorAssertion;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    double _currentResumeTime;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    BOOL _tearingDownInputController;
    double _resetInputModeTime;
    unsigned long long _latestDelayTime;
    UILayoutGuide *_focusSafeAreaLayoutGuide;
}

@property (retain, nonatomic) UIViewController *inputController;
@property (retain, nonatomic) NSArray *internalEdgeMatchConstraints;
@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_requiresProxyInterface;
+ (id)inputSnapshotViewForInputMode:(id)a0 orientation:(long long)a1;
+ (void)applicationDidReceiveMemoryWarning:(id)a0;
+ (id)deferredInputModeControllerWithKeyboard:(id)a0;
+ (id)inputViewControllerWithView:(id)a0;

- (void)willBeginTranslation;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(BOOL)a0;
- (void)didSuspend:(id)a0;
- (void)rebuildChildConstraints;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)shouldUpdateInputMode:(id)a0;
- (void)willResume:(id)a0;
- (void)assertCurrentInputModeIfNecessary;
- (void)viewWillAppear:(BOOL)a0;
- (void)setDeferredSystemView:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)keyboardWillChangeFromDelegate:(id)a0 toDelegate:(id)a1;
- (void)resetInputModeInMainThread;
- (void)setInputMode:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)tearDownInputController;
- (void)takeSnapshotView;
- (id)preferredFocusedView;
- (id)_initAsDeferredController;
- (id)_compatView;
- (void)loadView;
- (id)childCompatibilityController;
- (void)removeSnapshotView;
- (void)addSnapshotViewForInputMode:(id)a0;
- (void)isHosted:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)killIncomingExtension;
- (BOOL)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)a0;
- (void)setTearingDownInputController;
- (void).cxx_destruct;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)_keyboard;
- (void)resetInputMode;
- (id)_systemViewControllerForInputMode:(id)a0;
- (id)_keyboardForThisViewController;
- (id)_compatibilityController;
- (void)validateInputModeIsDisplayed;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (BOOL)shouldAutomaticallyForwardRotationMethods;

@end
