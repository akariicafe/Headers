@class NSDictionary, CPMLSchema, CPMLDB, CPMLStorageManager;
@protocol CPMLAlgorithmProtocol;

@interface CPMLTrainer : NSObject {
    BOOL shouldFail;
    struct sqlite3 { } *modelDB;
    NSDictionary *modelPlist;
    CPMLDB *cpmlDB;
    struct CPMLCDB { struct CPMLStatistics *x0; struct sqlite3 *x1; struct sqlite3 *x2; struct CPMLIterator *x3; struct CPMLRemapper *x4; struct CPMLTunableData *x5; } *cpCDB;
    struct CPMLAlgorithm { void /* function */ **x0; char x1[32]; void *x2; struct CPMLCDB *x3; struct CPMLDelegate *x4; struct CPMLDelegateEngine *x5; struct CPMLTunableData *x6; struct CPMLIterator *x7; struct CPMLSerialization *x8; } *cpMLAlgo;
    void *cpRemapper;
    CPMLSchema *cpmlSchema;
    void *trainerCPStatistics;
    struct CPMLSerialization { void /* function */ **x0; BOOL x1; int x2; int x3; void *x4; struct sqlite3 *x5; } *trainerCPSerializer;
    struct CPMLTunableData { int x0; void *x1; void *x2; } *cpTuneableData;
    int mapFunction;
    struct CPMLDelegate { void *x0; void *x1; } *_cpmlDelegate;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> _theDelegate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)buildTrainingMachineLearningAlgorithm:(id)a0;
- (id)fileProtectionClassRequest:(id)a0;
- (id)getSolution;
- (id)init:(id)a0 withModelDBPath:(id)a1 withPropertyList:(id)a2;
- (void)train:(BOOL)a0;

@end
