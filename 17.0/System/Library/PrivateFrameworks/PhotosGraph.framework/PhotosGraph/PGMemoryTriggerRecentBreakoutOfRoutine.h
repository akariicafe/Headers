@class PGNeighborScoreComputer;

@interface PGMemoryTriggerRecentBreakoutOfRoutine : PGMemoryTrigger {
    PGNeighborScoreComputer *_neighborScoreComputer;
}

- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (id)neighborScoreComputerWithGraph:(id)a0;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
