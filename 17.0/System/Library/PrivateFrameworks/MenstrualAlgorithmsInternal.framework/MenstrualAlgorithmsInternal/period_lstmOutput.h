@class MLMultiArray, NSSet;

@interface period_lstmOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *out_;
@property (retain, nonatomic) MLMultiArray *lstm_1_h_out;
@property (retain, nonatomic) MLMultiArray *lstm_1_c_out;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithOut:(id)a0 lstm_1_h_out:(id)a1 lstm_1_c_out:(id)a2;

@end
