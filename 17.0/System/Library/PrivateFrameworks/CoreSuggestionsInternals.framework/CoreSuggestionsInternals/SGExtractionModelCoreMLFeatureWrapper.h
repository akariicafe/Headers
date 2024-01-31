@class NSDictionary, NSSet;

@interface SGExtractionModelCoreMLFeatureWrapper : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) NSDictionary *featureDict;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithFeatureProvider:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithFeatureDict:(id)a0;

@end
