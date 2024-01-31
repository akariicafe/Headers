@class NSString, SBIdleTimerDefaults, NSHashTable, SBInactiveTouchShieldWindow, SBFTapToWakeGestureRecognizer;
@protocol SBTapToWakeDelegate;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer;
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer;
@property (retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults;
@property (nonatomic, getter=_gesturesEnabled, setter=_setGesturesEnabled:) BOOL gesturesEnabled;
@property (nonatomic, getter=_isHitTestSuppressionEnabled, setter=_setHitTestSuppressionEnabled:) BOOL hitTestSuppressionEnabled;
@property (readonly, nonatomic, getter=_inactiveTouchShieldWindow) SBInactiveTouchShieldWindow *inactiveTouchShieldWindow;
@property (readonly, nonatomic, getter=_recycledInactiveTouchShieldWindows) NSHashTable *recycledInactiveTouchShieldWindows;
@property (weak, nonatomic) id<SBTapToWakeDelegate> delegate;
@property (nonatomic, getter=isDigitizerInTapToWakeMode) BOOL digitizerInTapToWakeMode;
@property (nonatomic) BOOL digitizerModeRequiresHitTestSuppression;
@property (readonly, nonatomic) BOOL shouldTapToWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTapToWakeSupported;

- (id)init;
- (void)pencilToWakeDidRecognize:(id)a0;
- (void).cxx_destruct;
- (void)tapToWakeDidRecognize:(id)a0;
- (void)_evaluateEnablement;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
