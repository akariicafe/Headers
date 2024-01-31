@class NSSet;

@interface RTPlaceTypeClassifierModelRankerOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double target;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithTarget:(double)a0;
- (id)featureValueForName:(id)a0;

@end
