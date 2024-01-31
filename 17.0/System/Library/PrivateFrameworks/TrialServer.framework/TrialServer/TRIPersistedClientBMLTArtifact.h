@class TRIPBTimestamp, TRIClientBackgroundMLTask, TRIPBUInt32Array;

@interface TRIPersistedClientBMLTArtifact : TRIPBMessage

@property (retain, nonatomic) TRIClientBackgroundMLTask *backgroundMlTask;
@property (nonatomic) BOOL hasBackgroundMlTask;
@property (retain, nonatomic) TRIPBUInt32Array *populationsArray;
@property (readonly, nonatomic) unsigned long long populationsArray_Count;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) BOOL hasDeploymentDate;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) BOOL hasDownloadSize;
@property (nonatomic) int deploymentType;
@property (nonatomic) BOOL hasDeploymentType;

+ (id)descriptor;

@end
