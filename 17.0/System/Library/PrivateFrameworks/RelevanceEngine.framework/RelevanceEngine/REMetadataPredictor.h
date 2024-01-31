@class NSMutableDictionary;

@interface REMetadataPredictor : REPredictor {
    NSMutableDictionary *_interactionFeatureValueCache;
    NSMutableDictionary *_sectionFeatureValueCache;
}

+ (id)supportedFeatures;

- (id)_init;
- (void)update;
- (void).cxx_destruct;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
