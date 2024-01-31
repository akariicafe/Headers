@interface PGLastMonthAtHomeMemoryGenerator : PGMemoryGenerator

+ (id)lastMonthAtHomeMemoriesForMonth:(long long)a0 year:(long long)a1 inGraph:(id)a2 momentNodesWithBlockedFeatureCache:(id)a3 photoLibrary:(id)a4 loggingConnection:(id)a5 progressReporter:(id)a6;

- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
