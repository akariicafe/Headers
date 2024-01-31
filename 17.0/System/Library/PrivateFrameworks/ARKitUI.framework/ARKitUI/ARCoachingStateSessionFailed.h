@class ARCoachingHeuristicCollection, ARCoachingState;

@interface ARCoachingStateSessionFailed : ARCoachingState {
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}

- (id)initWithView:(id)a0;
- (long long)requirements;
- (void).cxx_destruct;
- (void)enter;
- (id)doAction:(long long)a0;

@end
