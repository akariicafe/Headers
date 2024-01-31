@class NSString, HDDaemon;

@interface HDOntologyMedicationFeatureEvaluator : NSObject

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)initWithDaemon:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canRequireShardWithError:(id *)a0;
- (void)triggerShardEvaluatorWithReason:(id)a0;

@end
