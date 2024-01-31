@class NSSet, NSMutableSet, NSHashTable, UIPress;

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}

@property (retain, nonatomic) UIPress *_lastPreparedPress;
@property (readonly, nonatomic) NSSet *allPresses;

- (id)_gestureRecognizersForWindow:(id)a0;
- (long long)subtype;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_pressesForPhase:(long long)a0;
- (id)_init;
- (void)_addGesturesForPress:(id)a0;
- (long long)_modifierFlags;
- (void)_cleanupAfterDispatch;
- (id)_terminalRegistrantsForPressType:(long long)a0;
- (void)_registerForTerminalEvent:(id)a0;
- (id)_pressesForResponder:(id)a0 withPhase:(long long)a1;
- (id)_allPresses;
- (id)description;
- (id)_cloneEvent;
- (id)pressesForGestureRecognizer:(id)a0;
- (id)_pressesForWindow:(id)a0;
- (id)_pressesForGestureRecognizer:(id)a0 withPhase:(long long)a1;
- (void).cxx_destruct;
- (void)_addPress:(id)a0 forDelayedDelivery:(BOOL)a1;
- (void)_unregisterForTerminalEvent:(id)a0;
- (id)_directionalPressWithStrongestForce;
- (void)_removePress:(id)a0;
- (id)_windows;
- (id)_respondersForWindow:(id)a0;
- (long long)type;

@end
