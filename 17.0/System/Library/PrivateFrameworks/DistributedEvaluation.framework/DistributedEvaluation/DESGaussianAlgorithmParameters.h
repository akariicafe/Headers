@class NSString, NSDictionary, NSMutableDictionary;

@interface DESGaussianAlgorithmParameters : NSObject <AlgorithmParametersProtocol> {
    double _epsilon;
    double _delta;
    NSMutableDictionary *_parameters;
    NSDictionary *_momentsAccountantParameters;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) double sigma;
@property (readonly, nonatomic) double clippingBound;
@property (readonly, nonatomic) NSDictionary *parameters;

- (void).cxx_destruct;
- (void)addPerChunkParametersWith:(double)a0 numChunks:(unsigned long long)a1;
- (BOOL)calculateAndVerifyPerChunkClippingBoundsIn:(id)a0 withOverallClippingBound:(double)a1;
- (id)initWith:(id)a0 epsilon:(double)a1 delta:(double)a2 clippingBound:(double)a3;
- (id)initWith:(id)a0 epsilon:(double)a1 delta:(double)a2 clippingBound:(double)a3 momentsAccountantParameters:(id)a4;
- (id)initWith:(id)a0 recipe:(id)a1;

@end
