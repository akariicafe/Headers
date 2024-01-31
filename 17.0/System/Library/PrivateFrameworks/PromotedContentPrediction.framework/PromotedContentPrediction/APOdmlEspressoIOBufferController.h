@class NSDictionary, NSArray, APOdmlRecipe;

@interface APOdmlEspressoIOBufferController : NSObject

@property (readonly, nonatomic) APOdmlRecipe *recipe;
@property (readonly, copy, nonatomic) NSDictionary *inputBuffers;
@property (readonly, nonatomic) struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *pTTR;
@property (readonly, nonatomic) struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *loss;
@property (readonly, nonatomic) struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *isTraining;
@property (readonly, nonatomic) struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *learningRate;
@property (readonly, copy, nonatomic) NSArray *weightBuffers;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 espressoNet:(struct { void *x0; int x1; } *)a1 bufferName:(id)a2 bufferType:(int)a3;
- (BOOL)_setError:(id *)a0 errorCode:(long long)a1;
- (BOOL)_setErrorPtr:(id *)a0 toError:(id)a1;
- (BOOL)bindBuffersTo:(struct { void *x0; int x1; } *)a0 error:(id *)a1;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })getEspressoBufferShape:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (BOOL)imputeFeature:(id)a0 network:(struct { void *x0; int x1; } *)a1 offsetIndex:(unsigned long long)a2 error:(id *)a3;
- (id)initWithRequiredFeatures:(id)a0 recipe:(id)a1;
- (void)reportMissingFeatureError:(id)a0;
- (BOOL)setFeatureDataForRow:(id)a0 offsetIndex:(unsigned long long)a1 featureName:(id)a2 error:(id *)a3;
- (BOOL)setInputData:(id)a0 batchSize:(unsigned long long)a1 network:(struct { void *x0; int x1; } *)a2 reportMissingFeature:(BOOL)a3 error:(id *)a4;

@end
