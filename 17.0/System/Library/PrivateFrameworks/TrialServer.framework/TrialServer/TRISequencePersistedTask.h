@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIAnyPersistedTask *task;
@property (nonatomic) BOOL hasTask;
@property (retain, nonatomic) TRIAnyPersistedTask *dependentTask;
@property (nonatomic) BOOL hasDependentTask;

+ (id)descriptor;

@end
