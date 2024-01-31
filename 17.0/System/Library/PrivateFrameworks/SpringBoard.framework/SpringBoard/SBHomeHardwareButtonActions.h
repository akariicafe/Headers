@class SBHardwareButtonGestureParameters, NSString, SBHardwareButtonActionList, SBHardwareButtonService, SBProximitySensorManager;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    BOOL _screenWasDimOnMenuDown;
    BOOL _dontUnlockOnButtonUp;
    long long _homeButtonType;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldStartAbsoluteTime;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
}

@property (nonatomic, getter=isButtonDown) BOOL buttonDown;
@property (nonatomic) double currentLongPressDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performLongPressActions;
- (BOOL)_shouldIgnorePressesDueToProxOrIdle:(id *)a0;
- (void)performInitialButtonDownActions;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performSinglePressUpActions;
- (void)performDoubleTapUpActions;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(id /* block */)a0;
- (void)configureForwardingToLockButtonActions:(id)a0;
- (void)performLongPressCancelledActions;
- (void)performWhenMenuButtonIsUpUsingBlock:(id /* block */)a0;
- (void)performInitialButtonUpActions;
- (id)hardwareButtonGestureParameters;
- (BOOL)_performButtonPreflightActions;
- (void).cxx_destruct;
- (void)performSinglePressUpActionsWithSourceType:(unsigned long long)a0;
- (id)initWitHomeButtonType:(long long)a0;
- (void)performTriplePressUpActions;
- (void)_logMenuButtonHoldTime;
- (void)performFinalButtonUpActions;
- (void)performDoublePressDownActions;

@end
