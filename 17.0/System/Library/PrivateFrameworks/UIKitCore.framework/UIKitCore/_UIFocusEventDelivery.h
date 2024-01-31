@class NSMutableSet, UIFocusSystem;

@interface _UIFocusEventDelivery : NSObject {
    UIFocusSystem *_focusSystem;
    double _lastDeliveredTimestamp;
    long long _lastDeliveredMovement;
}

@property (readonly, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) NSMutableSet *keyboardPressEventForwardingMap;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_movementParticipatesInCooldown:(long long)a0;
- (id)initWithFocusSystem:(id)a0;
- (BOOL)shouldDeliverFocusKeyboardEvent:(id)a0 toResponder:(id)a1;
- (BOOL)shouldSkipKeyCommand:(id)a0 whenDeliveringFocusKeyboardEvent:(id)a1 toResponder:(id)a2;
- (void)willDeliverFocusKeyboardEvent:(id)a0;

@end
