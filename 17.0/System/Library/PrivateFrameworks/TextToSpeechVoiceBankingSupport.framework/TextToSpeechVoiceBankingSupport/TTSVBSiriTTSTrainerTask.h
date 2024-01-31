@class NSString, SiriTTSTrainerTask;

@interface TTSVBSiriTTSTrainerTask : NSObject

@property (readonly, nonatomic) SiriTTSTrainerTask *task;
@property (retain, nonatomic) SiriTTSTrainerTask *task;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long trainingStatus;
@property (readonly, nonatomic) long long currentTaskValue;
@property (readonly, nonatomic) long long currentTaskTotal;
@property (readonly, nonatomic) double normalizedProgressValue;
@property (readonly, nonatomic) BOOL isUnfinishedOrPending;

- (id)description;
- (void).cxx_destruct;
- (long long)_ttsvbStatusForSiriTaskStatus:(long long)a0;
- (long long)_ttsvbStatusForSiriTrainingStatus:(long long)a0;
- (id)initWithSiriTTSTrainerTask:(id)a0;
- (id)initWithTaskID:(id)a0 trainingAssetURL:(id)a1 dataAssetURL:(id)a2 inferenceAssetURL:(id)a3 trainingMode:(long long)a4 startImmediately:(BOOL)a5;

@end
