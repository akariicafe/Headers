@interface MLBatchProviderUtils : NSObject

+ (id)batchFromConcatinatingBatches:(id)a0;
+ (id)batchWithSubsetOfFeaturesNamed:(id)a0 fromBatch:(id)a1;
+ (id)dictionaryFromBatch:(id)a0;
+ (id)dictionaryFromBatch:(id)a0 featureNames:(id)a1;
+ (id)featureDescriptionsByNameForBatch:(id)a0 error:(id *)a1;
+ (id)featureNamesInBatch:(id)a0;
+ (id)featureProviderArrayFromBatch:(id)a0;
+ (id)featureValueArrayForName:(id)a0 batch:(id)a1 error:(id *)a2;
+ (id)lazyBatchIndexIntoBatch:(id)a0 indices:(id)a1 error:(id *)a2;
+ (id)lazyBatchWindowIntoBatch:(id)a0 startIndex:(unsigned long long)a1 windowLength:(unsigned long long)a2 error:(id *)a3;
+ (id)lazyBatchWithFeaturesInBatch:(id)a0 addedToBatch:(id)a1 error:(id *)a2;
+ (BOOL)vectorizeFeaturesNamed:(id)a0 fromBatch:(id)a1 intoRowsOfDoubleMatrix:(id)a2 error:(id *)a3;

@end
