@class PGMemoryMomentRequirements;

@interface PGLocationTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (id)trendType;

@end
