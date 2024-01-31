@interface PGMemoryTriggerFeatureCentricHoliday : PGHolidayMemoryTrigger

+ (id)_relationshipForHolidayName:(id)a0;

- (unsigned long long)triggerType;
- (id)personNodesForRelationship:(id)a0 inGraph:(id)a1;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
