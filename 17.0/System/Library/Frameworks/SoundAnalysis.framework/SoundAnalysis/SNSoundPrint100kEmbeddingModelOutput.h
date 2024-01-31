@class MLMultiArray, NSSet;

@interface SNSoundPrint100kEmbeddingModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *output1;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithOutput1:(id)a0;

@end
