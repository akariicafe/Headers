@class NSSet, NSMutableDictionary, NSArray, MLMultiArray, MLFeatureDescription;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {
    MLFeatureDescription *_featureDescription;
    NSMutableDictionary *_featureCache;
    NSArray *_allInputFeatureNames;
    MLMultiArray *_input;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;

@end
