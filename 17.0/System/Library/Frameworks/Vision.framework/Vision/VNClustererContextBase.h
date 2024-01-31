@class NSString, NSNumber;

@interface VNClustererContextBase : NSObject {
    NSString *_type;
    NSNumber *_threshold;
    NSNumber *_torsoThreshold;
    NSString *_cacheDirectoryPath;
    BOOL _readOnly;
    unsigned long long _faceprintRequestRevision;
    unsigned long long _torsoprintRequestRevision;
}

- (void).cxx_destruct;
- (BOOL)_checkInitInputs:(id)a0 cachePath:(id)a1 checkType:(id)a2 requestRevision:(unsigned long long)a3 error:(id *)a4;
- (id)_createGreedyClusterer:(Class)a0 state:(id)a1 error:(id *)a2;
- (void)_initializeGreedyClustererOptions:(id)a0;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 readOnly:(BOOL)a3 threshold:(float)a4 requestRevision:(unsigned long long)a5 error:(id *)a6;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 readOnly:(BOOL)a3 threshold:(float)a4 requestRevision:(unsigned long long)a5 torsoprintRequestRevision:(unsigned long long)a6 error:(id *)a7;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 readOnly:(BOOL)a3 threshold:(float)a4 torsoThreshold:(float)a5 requestRevision:(unsigned long long)a6 error:(id *)a7;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 readOnly:(BOOL)a3 threshold:(float)a4 torsoThreshold:(float)a5 requestRevision:(unsigned long long)a6 torsoprintRequestRevision:(unsigned long long)a7 error:(id *)a8;

@end
