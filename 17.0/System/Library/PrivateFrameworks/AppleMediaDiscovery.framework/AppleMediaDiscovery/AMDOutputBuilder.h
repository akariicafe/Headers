@class NSString, NSMutableDictionary;

@interface AMDOutputBuilder : NSObject

@property (retain, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSMutableDictionary *outputDefinitions;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)convertMultiArray:(id)a0 withShape:(id)a1 atDepth:(unsigned int)a2 withKey:(id)a3 withScoreThreshold:(double)a4 error:(id *)a5;
- (id)createHeapOfType:(long long)a0 withCapacity:(unsigned long long)a1;
- (id)generateMappingDictionary:(id)a0;
- (id)getAllFeatureIds;
- (id)getOutputfor:(id)a0 FromMLProvider:(id)a1 andModelAssets:(id)a2 withColdstartModelId:(id)a3 topN:(unsigned long long)a4 error:(id *)a5;
- (id)getPredictions:(unsigned long long)a0 fromMLProvider:(id)a1 andModelAssets:(id)a2 withColdstartModelId:(id)a3 error:(id *)a4;
- (id)getRemapDictFor:(id)a0 withModelAssets:(id)a1;
- (id)getTopN:(unsigned long long)a0 idsAndScoresFrom:(id)a1 withMappingDictionary:(id)a2 withType:(long long)a3;
- (id)initWithDictionary:(id)a0 forUseCase:(id)a1;
- (id)process2DMultiArray:(id)a0 shapeLength:(unsigned int)a1 withDataType:(long long)a2 withOutputDefinition:(id)a3 andModelAssets:(id)a4 withColdstartModelId:(id)a5 idsOnly:(BOOL)a6 inferenceMode:(id)a7 error:(id *)a8;
- (id)processArrayOutput:(id)a0 withDataType:(long long)a1 withOutputDefinition:(id)a2 andModelAssets:(id)a3 withColdstartModelId:(id)a4 idsOnly:(BOOL)a5 error:(id *)a6;
- (id)processMultiArrayModelOutput:(id)a0 withOutputDefinition:(id)a1 FromMLProvider:(id)a2 andModelAssets:(id)a3 withColdstartModelId:(id)a4 withTopN:(unsigned long long)a5 error:(id *)a6;

@end
