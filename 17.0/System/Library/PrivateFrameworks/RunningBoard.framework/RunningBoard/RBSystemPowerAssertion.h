@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (id)init;
- (void).cxx_destruct;
- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;

@end
