@class NSArray, NSString, ARTechniqueParallelGatherContext, NSObject;
@protocol OS_dispatch_queue;

@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate> {
    BOOL _parallelExecution;
    NSObject<OS_dispatch_queue> *_queue;
    ARTechniqueParallelGatherContext *_previousContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _previousContext_lock;
}

@property (copy) NSArray *techniques;
@property (copy) NSArray *_internalTechniques;
@property (readonly) BOOL isParallel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parentTechniqueOfClass:(Class)a0 inArray:(id)a1;
+ (id)techinqueInArray:(id)a0 passingTest:(id /* block */)a1;
+ (id)techniquesByForceReplacingTechniques:(id)a0 withMatchingClassTechniques:(id)a1;
+ (id)techniquesByReplacingOriginalTechniques:(id)a0 withReplacementTechniques:(id)a1 passingTest:(id /* block */)a2;

- (id)processData:(id)a0;
- (id)_fullDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (void)_submitResultsForTimestamp:(double)a0 context:(id)a1;
- (void)dotGraphWithLines:(id)a0;
- (id)initWithParallelTechniques:(id)a0;
- (id)initWithTechniques:(id)a0;
- (id)initWithTechniques:(id)a0 delegate:(id)a1;
- (unsigned long long)optionalSensorDataTypes;
- (id)predictedResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)processData:(id)a0 onTechniques:(id)a1;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1 onTechniques:(id)a2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)reuseTechniques:(id)a0;
- (void)setBonusLatency:(double)a0;
- (void)setPowerUsage:(unsigned long long)a0;
- (void)siblingTechniquesDidChange:(id)a0;
- (void)technique:(id)a0 didFailWithError:(id)a1;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3 onTechniques:(id)a4;
- (id)techniqueMatchingPredicate:(id)a0;
- (id)techniqueOfClass:(Class)a0;

@end
