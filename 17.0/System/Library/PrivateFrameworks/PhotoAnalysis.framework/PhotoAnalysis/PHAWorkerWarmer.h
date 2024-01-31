@class PHAJobConstraints, NSMutableSet, PHAWorker;

@interface PHAWorkerWarmer : NSObject

@property (class, readonly) unsigned long long stateCode;

@property (readonly, nonatomic) NSMutableSet *workers;
@property (retain, nonatomic) PHAWorker *lastActiveWorker;
@property (retain, nonatomic) PHAJobConstraints *lastConstraints;

- (id)statusAsDictionary;
- (id)init;
- (void)recordConstraintChange:(id)a0;
- (void)setActiveWorker:(id)a0 withJob:(id)a1;
- (BOOL)_cooldownWorkerIfWarmed:(id)a0;
- (void).cxx_destruct;
- (void)reportNoMoreJobsExpected;
- (void)_warmupWorkerIfCooled:(id)a0 withProgressBlock:(id /* block */)a1;

@end
