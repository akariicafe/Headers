@class NSString, HDOntologyUpdateCoordinator;

@interface HDOntologyCHRFeatureEvaluator : NSObject <HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator>

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (id)init;
- (long long)requiresFeatureShardForProfile:(id)a0;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void).cxx_destruct;
- (BOOL)canRequireShardWithError:(id *)a0;
- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;

@end
