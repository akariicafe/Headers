@class NSString, NSSet, PGGraphPersonNode, PGTimeTitleOptions, PGGraphLocationCityNode;

@interface PGTrendsMemoryTitleGenerator : PGTitleGenerator {
    long long _type;
    NSString *_sceneFeatureLabel;
    PGGraphLocationCityNode *_cityNode;
    PGGraphPersonNode *_personNode;
    NSSet *_momentNodes;
    PGTimeTitleOptions *_timeTitleOptions;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 sceneFeatureLabel:(id)a1 cityNode:(id)a2 titleGenerationContext:(id)a3 timeTitleOptions:(id)a4;
- (id)initWithMomentNodes:(id)a0 sceneFeatureLabel:(id)a1 personNode:(id)a2 titleGenerationContext:(id)a3 timeTitleOptions:(id)a4;
- (id)initWithMomentNodes:(id)a0 sceneFeatureLabel:(id)a1 titleGenerationContext:(id)a2 timeTitleOptions:(id)a3;

@end
