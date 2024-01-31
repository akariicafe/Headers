@class MLMultiArray, NSSet;

@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *user_vector;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithUser_vector:(id)a0;

@end
