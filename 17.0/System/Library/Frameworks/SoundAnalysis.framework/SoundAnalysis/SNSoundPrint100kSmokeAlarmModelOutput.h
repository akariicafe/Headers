@class MLMultiArray, NSSet;

@interface SNSoundPrint100kSmokeAlarmModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *Sigmoid;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithSigmoid:(id)a0;

@end
