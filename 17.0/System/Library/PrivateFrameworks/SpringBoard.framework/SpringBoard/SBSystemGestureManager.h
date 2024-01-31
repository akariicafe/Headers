@class NSMapTable, NSString, UIGestureRecognizer, NSSet, NSMutableDictionary, NSMutableSet, _UISystemGestureManager, UIPointerInteraction, FBSDisplayIdentity, SBIndirectTouchLifecycleMonitor;
@protocol SBSystemUIPointerInteractionDelegate, BSInvalidatable;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, UIPointerInteractionDelegate, BSDescriptionProviding, BSInvalidatable> {
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMapTable *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    id<BSInvalidatable> _systemGestureEventDeferringRule;
    id<BSInvalidatable> _pointerEventRoutingAssertion;
    unsigned int _lastSystemGestureWindowContextId;
    id<BSInvalidatable> _systemGesturesAllowedToken;
    UIPointerInteraction *_systemPointerInteraction;
    id<BSInvalidatable> _systemPointerContextIDAssertion;
    BOOL _isInvalidated;
}

@property (weak, nonatomic) _UISystemGestureManager *systemGestureManager;
@property (weak, nonatomic) id<SBSystemUIPointerInteractionDelegate> systemPointerInteractionDelegate;
@property (readonly, nonatomic, getter=isAnyTouchGestureRunning) BOOL anyTouchGestureRunning;
@property (nonatomic, getter=areSystemGesturesDisabledForAccessibility) BOOL systemGesturesDisabledForAccessibility;
@property (retain, nonatomic) NSSet *gesturesPreventedByStylus;
@property (retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isDeviceHardwareButtonGestureType:(unsigned long long)a0;
+ (id)deviceHardwareButtonGestureTypes;
+ (id)mainDisplayManager;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)init;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)windowForSystemGestures;
- (id)succinctDescriptionBuilder;
- (id)_initWithDisplayIdentity:(id)a0;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)succinctDescription;
- (void)_evaluateEnablement;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_disableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (void)_configureForNewSystemGestureWindowIfNecessary;
- (void)_enableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (BOOL)_isTouchGestureWithType:(unsigned long long)a0;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)a0;
- (void)_systemGestureChanged:(id)a0;
- (id)acquireSystemGestureDisableAssertionForReason:(id)a0 exceptSystemGestureTypes:(id)a1;
- (id)acquireSystemGestureDisableAssertionForReason:(id)a0 forSystemGestureTypes:(id)a1;
- (void)addGestureRecognizer:(id)a0 withType:(unsigned long long)a1;
- (void)cancelGestureRecognizerOfType:(unsigned long long)a0 reason:(id)a1;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)a0;
- (BOOL)isGestureWithTypeAllowed:(unsigned long long)a0;
- (BOOL)isSystemGestureRecognizer:(id)a0;
- (BOOL)shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (unsigned long long)typeOfSystemGesture:(id)a0;

@end
