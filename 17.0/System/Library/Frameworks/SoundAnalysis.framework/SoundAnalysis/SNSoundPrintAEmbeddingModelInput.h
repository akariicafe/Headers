@class MLMultiArray, NSSet;

@interface SNSoundPrintAEmbeddingModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *audioSamples;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithAudioSamples:(id)a0;

@end
