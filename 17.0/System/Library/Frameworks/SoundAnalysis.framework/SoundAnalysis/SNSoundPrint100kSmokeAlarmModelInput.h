@class MLMultiArray, NSSet;

@interface SNSoundPrint100kSmokeAlarmModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *soundprint_Placeholder;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithSoundprint_Placeholder:(id)a0;

@end
