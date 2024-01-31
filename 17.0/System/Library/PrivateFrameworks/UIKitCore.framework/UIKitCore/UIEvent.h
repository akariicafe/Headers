@class UIScreen, NSSet, UIEventEnvironment, BKSHIDEventAuthenticationMessage, NSMutableSet;

@interface UIEvent : NSObject {
    struct __GSEvent { } *_gsEvent;
    struct __IOHIDEvent { } *_hidEvent;
    BOOL _hasValidModifiers;
    long long _mzModifierFlags;
    unsigned long long _mzClickCount;
    long long _buttonMask;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    BOOL _isInteractionBehaviorInactive;
    UIEventEnvironment *_eventEnvironment;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;
@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;
@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *_authenticationMessage;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) long long buttonMask;
@property (readonly, nonatomic) NSSet *allTouches;

+ (unsigned long long)_inputPrecisionForTouches:(id)a0;

- (void)_sendEventToResponder:(id)a0;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)dealloc;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_init;
- (id)_modifiedInput;
- (id)predictedTouchesForTouch:(id)a0;
- (BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)a0 inWindow:(id)a1;
- (long long)_modifierFlags;
- (id)_touchesForGestureRecognizer:(id)a0;
- (BOOL)_shouldSkipEventDeliveryWithIgnoreInteractionEvents:(BOOL)a0;
- (void)_cleanupAfterDispatch;
- (id)_initWithEnvironment:(id)a0;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (id)_cloneEvent;
- (id)touchesForWindow:(id)a0;
- (id)_screen;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (void).cxx_destruct;
- (int)_shakeState;
- (id)_unmodifiedInput;
- (BOOL)_isPhysicalKeyEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_windows;
- (id)touchesForView:(id)a0;
- (id)touchesForGestureRecognizer:(id)a0;
- (double)_wheelVelocity;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (id)coalescedTouchesForTouch:(id)a0;
- (BOOL)_isKeyDown;
- (long long)_buttonMask;
- (unsigned long long)_clickCount;
- (void)_didSendEvent;
- (unsigned long long)_focusHeading;
- (struct __GSEvent { } *)_gsEvent;
- (struct __IOHIDEvent { } *)_hidEvent;
- (BOOL)_isInteractionBehaviorInactive;
- (BOOL)_isTouchRoutingPolicyBased;
- (long long)_keyModifierFlags;
- (long long)_moveDirection;
- (void)_setGSEvent:(struct __GSEvent { } *)a0;
- (id)_triggeringPhysicalButton;

@end
