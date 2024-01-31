@class NSSet;
@protocol MLFeatureProvider;

@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider>

@property (retain, nonatomic) id<MLFeatureProvider> first;
@property (retain, nonatomic) id<MLFeatureProvider> second;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithFeaturesFrom:(id)a0 addedToFeaturesFrom:(id)a1;
- (id)unionFeatureProvider;

@end
