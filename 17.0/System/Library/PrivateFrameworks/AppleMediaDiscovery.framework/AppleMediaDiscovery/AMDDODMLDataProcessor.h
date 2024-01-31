@class NSArray, NSMutableDictionary, AMDClient, AMDDODMLAttachmentProcessor;

@interface AMDDODMLDataProcessor : NSObject {
    NSArray *_actionArray;
    NSMutableDictionary *_coreDictionary;
    NSMutableDictionary *_inputDictionary;
    NSMutableDictionary *_elementsInSample;
    NSMutableDictionary *_numberInputsBound;
    AMDDODMLAttachmentProcessor *_attachmentsProcessor;
    AMDClient *_myAMDClient;
}

- (void).cxx_destruct;
- (id)getElementInNumberInputsBounds:(id)a0;
- (id)bindToBuffer:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)combineArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)destroyArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)aggregateArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)checkIfArrayEmptyAndThrowError:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)constantValueMathFunction:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)downSampleData:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)filterArrayOnNumber:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)generateHashFromInputs:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)getCoreDictionary;
- (id)getCurrentTime:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)getElementInCoreDictionary:(id)a0;
- (id)getElementInInputDictionary:(id)a0;
- (id)getElementsInSampleDictionary;
- (id)getInputDictionary;
- (long long)getInputSize;
- (id)hashAdamIdsToIndices:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)hashFromCoreDictionary:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)ifStatement:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)initWithActionArray:(id)a0 withAttachmentProcessor:(id)a1;
- (id)insertArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)insertRawArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)padArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)parseAndCall:(id)a0 withInputs:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)processForLoop:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)processForLoopHelper:(id)a0 withNumber:(id)a1 withDictionary:(id)a2;
- (id)processRecipe:(id *)a0 errorDomain:(id)a1;
- (id)randomizeArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)replicateArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)requestData:(id)a0 withUseStubs:(long long)a1 error:(id *)a2 errorDomain:(id)a3;
- (void)resetDataProcessorWithRecipe:(id)a0;
- (id)sampleFromDistribution:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (void)setElementInCoreDictionary:(id)a0 withKey:(id)a1;
- (void)setElementsInCoreDictionary:(id)a0;
- (id)sortArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)spliceArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)strideCopyAndSplitArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)strideCopyArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)twoArrayMathFunction:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)windowFunction:(id)a0 error:(id *)a1 errorDomain:(id)a2;

@end
