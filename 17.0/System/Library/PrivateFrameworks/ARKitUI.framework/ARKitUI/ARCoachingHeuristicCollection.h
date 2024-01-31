@class NSMutableArray;

@interface ARCoachingHeuristicCollection : ARCoachingHeuristic {
    NSMutableArray *_heuristics;
}

- (long long)requirements;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)addHeuristic:(id)a0;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
