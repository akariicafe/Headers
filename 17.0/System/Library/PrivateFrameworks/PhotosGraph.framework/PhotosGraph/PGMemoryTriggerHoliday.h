@interface PGMemoryTriggerHoliday : PGHolidayMemoryTrigger

- (unsigned long long)triggerType;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
