@class APOdmlEspressoIOBufferController, NSArray, APOdmlRecipe;

@interface APOdmlEspressoFacade : NSObject

@property (readonly, nonatomic) struct { void *x0; int x1; } *espressoNet;
@property (readonly, nonatomic) void *espressoPlan;
@property (retain, nonatomic) APOdmlRecipe *recipe;
@property (retain, nonatomic) APOdmlEspressoIOBufferController *bufferController;
@property (nonatomic) unsigned long long finalBatchSize;
@property (readonly, nonatomic) NSArray *requiredFeatures;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_checkModelOutput:(id)a0;
- (int)_executeEspressoPlan;
- (id)_extractRequiredFeatures;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })_getEspressoBlobShape:(id)a0;
- (BOOL)_loadEspressoNet:(const char *)a0 recipe:(id)a1 error:(id *)a2;
- (void)_preTrainingSetup;
- (BOOL)_prepareForTraining:(id *)a0;
- (float)_retrieveLossValue;
- (BOOL)_setErrorPtr:(id *)a0 toError:(id)a1;
- (float)accuracyInBatchWithError:(id *)a0;
- (BOOL)changeEspressoBatchSize:(unsigned long long)a0 error:(id *)a1;
- (id)computeAccuracyAndLoss:(id)a0 error:(id *)a1;
- (id)computeClientPttr:(id)a0 error:(id *)a1;
- (BOOL)finalizeEspressoPipeline:(id *)a0;
- (id)initWithEspressoNetURL:(id)a0 recipe:(id)a1 error:(id *)a2;
- (unsigned long long)numWeightsInBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (id)retrieveWeights2D:(id *)a0;
- (id)retrieveWeights:(id *)a0;
- (BOOL)setError:(id *)a0 errorCode:(long long)a1;
- (id)setEspressoNetworkFunction;
- (BOOL)trainWithTrainingSet:(id)a0 error:(id *)a1;

@end
