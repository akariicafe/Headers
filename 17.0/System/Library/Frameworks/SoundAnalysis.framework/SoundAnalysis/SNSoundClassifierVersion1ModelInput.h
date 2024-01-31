@class MLMultiArray, NSSet;

@interface SNSoundClassifierVersion1ModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *audioSamples;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithAudioSamples:(id)a0;

@end
