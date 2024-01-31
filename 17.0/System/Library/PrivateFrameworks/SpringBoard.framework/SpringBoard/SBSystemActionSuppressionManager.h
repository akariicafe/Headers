@class NSHashTable, NSString, CMSuppressionManager, SBSystemActionSuppressionManagerStateReducer, CMPocketStateManager, SBSystemActionSuppressionManagerState;

@interface SBSystemActionSuppressionManager : NSObject <CMPocketStateDelegate, BLSBacklightStateObserving, SBSystemActionDataSourceObserver> {
    CMSuppressionManager *_suppressionManager;
    CMPocketStateManager *_pocketStateManager;
    SBSystemActionSuppressionManagerStateReducer *_stateReducer;
    SBSystemActionSuppressionManagerState *_state;
    BOOL _subscribedToViewObstructionEvents;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)_didReduceState:(id)a0;
- (void)_queryPocketState;
- (void)_subscribeToViewObstructionEvents;
- (void)_unsubscribeFromViewObstructionEvents;
- (void)_updateViewObstructionSubscription;
- (void)systemActionDataSource:(id)a0 didUpdateSelectedAction:(id)a1;

@end
