@class MLMultiArray, NSSet;

@interface U2HeadInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input_mask;
@property (retain, nonatomic) MLMultiArray *sequence_output;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput_mask:(id)a0 sequence_output:(id)a1;

@end
