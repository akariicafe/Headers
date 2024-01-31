@class NSDictionary, NSString, NSSet;

@interface SNSoundClassifierVersion1ModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *_9;
@property (retain, nonatomic) NSString *classLabel;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWith_9:(id)a0 classLabel:(id)a1;

@end
