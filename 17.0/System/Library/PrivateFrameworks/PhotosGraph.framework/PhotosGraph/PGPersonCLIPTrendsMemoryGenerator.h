@interface PGPersonCLIPTrendsMemoryGenerator : PGPersonTrendsMemoryGenerator {
    unsigned long long _minimumSceneAnalysisVersion;
}

- (void)setMinimumSceneAnalysisVersion:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (unsigned long long)minimumSceneAnalysisVersion;

@end
