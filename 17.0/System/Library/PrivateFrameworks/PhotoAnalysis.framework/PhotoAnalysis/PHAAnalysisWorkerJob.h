@interface PHAAnalysisWorkerJob : PHAWorkerJob

@property (readonly, nonatomic) BOOL canUseNetwork;
@property (nonatomic) BOOL persistsAnalysisState;

- (id)description;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 canUseNetwork:(BOOL)a2 library:(id)a3;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;

@end
