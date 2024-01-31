@class MLMultiArray, NSSet;

@interface U2HeadOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *top_arg_ids;
@property (retain, nonatomic) MLMultiArray *arg_conf_scores;
@property (retain, nonatomic) MLMultiArray *intent_scores;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithTop_arg_ids:(id)a0 arg_conf_scores:(id)a1 intent_scores:(id)a2;

@end
