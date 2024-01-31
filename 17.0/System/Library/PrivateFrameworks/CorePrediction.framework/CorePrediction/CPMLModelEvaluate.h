@class CPMLStorageManager, NSString, CPMLSchema, NSNumber, NSMutableArray;
@protocol CPMLAlgorithmProtocol;

@interface CPMLModelEvaluate : NSObject {
    BOOL enableCacheString;
    BOOL keepInMemory;
    BOOL shouldFail;
    struct sqlite3 { } *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm { void /* function */ **x0; char x1[32]; void *x2; struct CPMLCDB *x3; struct CPMLDelegate *x4; struct CPMLDelegateEngine *x5; struct CPMLTunableData *x6; struct CPMLIterator *x7; struct CPMLSerialization *x8; } *cpMLAlgo;
    struct CPMLSerialization { void /* function */ **x0; BOOL x1; int x2; int x3; void *x4; struct sqlite3 *x5; } *trainerCPDeSerializer;
    void *cpRemapper;
    CPMLSchema *cpmlSchema;
    void *trainerCPStatistics;
    struct CPMLDelegate { void *x0; void *x1; } *_cpmlDelegate;
    struct CPMLTunableData { int x0; void *x1; void *x2; } *cpTuneableData;
    int mapFunction;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } boundedRemappedValues;
    struct CPMLDelegateEngine { void *x0; void *x1; } *_delegateEngine;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> _delegateAlgorithm;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)updateModel:(id)a0;
- (id)initWithModel:(id)a0 withPropertyList:(id)a1;
- (void)boundResult:(id)a0;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)constructVector:(void *)a0 withColumnPosition:(unsigned long long)a1 maxColNumber:(unsigned long long)a2 withValue:(id)a3;
- (id)doEvaluate:(void *)a0 withBoundedList:(void *)a1;
- (void)doRemapToFeatureVector:(void *)a0 withPositionID:(unsigned long long)a1 withMaxCol:(unsigned long long)a2 withValue:(id)a3;
- (id)evalArray:(id)a0;
- (id)evalCTypesV:(char *)a0;
- (id)evalDict:(id)a0;
- (id)evalNSObjectV:(id)a0;
- (id)evalString:(id)a0;
- (id)fileProtectionClassRequest:(id)a0;
- (int)getAttributeType:(id)a0;
- (void *)getModelData;
- (void)setCPMLAlgorithm:(id)a0;
- (void)setCPMLAlgorithmEngine:(id)a0;

@end
