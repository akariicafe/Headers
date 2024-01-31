@interface SNKShotFeaturizerImpl : NSObject <SNKShotFeaturizerProtocol>

+ (id /* block */)defaultRandomNumberGenerator;
+ (BOOL)ensureIsValidHallucinatorV3Model:(id)a0 error:(id *)a1;
+ (id)featurizeFiles:(id)a0 hallucinatorModelURL:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)featurizeFiles:(id)a0 hallucinatorModelURL:(id)a1 queue:(id)a2 resultHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (id)featurizeFiles:(id)a0 randomNumberGenerator:(id /* block */)a1 hallucinatorModelURL:(id)a2 error:(id *)a3;
+ (id)labelFromNumberRepresentation:(id)a0 error:(id *)a1;
+ (id)performSegmentationRequest:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationResult:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationStreamCompletion:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationStreamResult:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationStreamResults:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationStreamResults:(id)a0 streamCompletion:(id)a1 error:(id *)a2;
+ (id)plistStringFromDatasetType:(long long)a0 error:(id *)a1;
+ (id)plistStringFromLabel:(id)a0 error:(id *)a1;
+ (id /* block */)pseudoRandomNumberGeneratorWithSeed:(unsigned int)a0;
+ (id)readNumRepetitionsPerTimeShiftFromHallucinator:(id)a0 error:(id *)a1;
+ (id)readNumTimeShiftsPerSegmentFromHallucinator:(id)a0 error:(id *)a1;
+ (int)recognizeHallucinatorModel:(id)a0 error:(id *)a1;
+ (id)streamCompletionFromFeaturizationResult:(id)a0;
+ (id)streamResultWithEmbedding:(id)a0 label:(id)a1 dataset:(long long)a2 error:(id *)a3;
+ (id)streamResultsForDatasetType:(long long)a0 embeddings:(id)a1 labels:(id)a2 error:(id *)a3;
+ (id)streamResultsFromFeaturizationResult:(id)a0 error:(id *)a1;

@end
