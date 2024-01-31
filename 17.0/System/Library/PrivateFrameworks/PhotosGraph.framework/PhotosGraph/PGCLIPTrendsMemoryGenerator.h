@interface PGCLIPTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    unsigned long long _minimumSceneAnalysisVersion;
}

+ (id)CLIPTrendsConfigurations;
+ (id)_CLIPTrends;

- (void)setMinimumSceneAnalysisVersion:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (unsigned long long)minimumSceneAnalysisVersion;

@end
