@class NSDictionary;

@interface MLOutputBackingsVerifier : NSObject

@property (readonly, nonatomic) NSDictionary *outputDescriptions;

- (void).cxx_destruct;
- (BOOL)_verifyMultiArrayOutputBacking:(id)a0 forFeature:(id)a1 error:(id *)a2;
- (BOOL)_verifyOutputBacking:(id)a0 forFeature:(id)a1 error:(id *)a2;
- (BOOL)_verifyPixelBufferOutputBacking:(struct __CVBuffer { } *)a0 forFeature:(id)a1 error:(id *)a2;
- (id)initWithOutputDescriptions:(id)a0;
- (BOOL)verifyOutputBackings:(id)a0 predictionUsesBatch:(BOOL)a1 error:(id *)a2;

@end
