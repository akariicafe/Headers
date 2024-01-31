@class MLMultiArray, NSSet;

@interface CBCE3Input : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithInput:(id)a0;
- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;

@end
