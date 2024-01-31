@class SBSystemActionViewObstructionState, SBSystemAction;

@interface SBSystemActionSuppressionManagerStateReducer : NSObject {
    long long _viewObstructionEligibility;
    id /* block */ _reduceBlock;
    BOOL _isAlwaysOnDisplayEnabled;
    SBSystemActionViewObstructionState *_viewObstructionState;
    SBSystemAction *_selectedAction;
    long long _pocketState;
    long long _displayState;
}

- (void).cxx_destruct;
- (id)_buildSuppressionMetrics;
- (id)_reduceState;

@end
