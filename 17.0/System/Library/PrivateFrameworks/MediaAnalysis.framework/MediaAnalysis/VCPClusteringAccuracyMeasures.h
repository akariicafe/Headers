@class NSMutableArray;

@interface VCPClusteringAccuracyMeasures : NSObject

@property float weightedAveragePrecision;
@property float weightedAverageRecall;
@property float numSingletons;
@property float numValidSingletons;
@property (retain) NSMutableArray *precisionPerCluster;
@property (retain) NSMutableArray *recallPerPersonToGroundTruth;
@property (retain) NSMutableArray *recallPerPersonExcludeMissDetection;

- (id)init;
- (void).cxx_destruct;
- (void)addClusterPrecision:(float)a0 forPersonID:(id)a1 personFaceCount:(unsigned long long)a2 validFaceCount:(unsigned long long)a3 identitySize:(unsigned long long)a4;
- (void)addIdentityRecallExcludeMissDetection:(float)a0 forPersonID:(id)a1 personFaceCount:(unsigned long long)a2 identitySize:(unsigned long long)a3;
- (void)addIdentityRecallToGroundTruth:(float)a0 forPersonID:(id)a1 personFaceCount:(unsigned long long)a2 identitySize:(unsigned long long)a3;

@end
