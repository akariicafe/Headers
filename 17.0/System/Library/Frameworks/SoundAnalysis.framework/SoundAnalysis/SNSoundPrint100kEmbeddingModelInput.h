@class MLMultiArray, NSSet;

@interface SNSoundPrint100kEmbeddingModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input1;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput1:(id)a0;

@end
