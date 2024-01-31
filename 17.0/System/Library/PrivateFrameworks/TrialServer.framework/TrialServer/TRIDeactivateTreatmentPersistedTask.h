@class NSString, TRIPBTimestamp, TRIPersistedTaskAttribution;

@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL failOnUnrecognizedExperiment;
@property (nonatomic) BOOL hasFailOnUnrecognizedExperiment;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;

+ (id)descriptor;

@end
