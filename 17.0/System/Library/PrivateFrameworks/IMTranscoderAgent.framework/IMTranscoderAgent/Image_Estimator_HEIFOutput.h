@class NSSet;

@interface Image_Estimator_HEIFOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double Target_Quality_Factor;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithTarget_Quality_Factor:(double)a0;

@end
