@class MLMultiArray, NSString, NSSet;

@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *multiArray;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithName:(id)a0 array:(id)a1;

@end
