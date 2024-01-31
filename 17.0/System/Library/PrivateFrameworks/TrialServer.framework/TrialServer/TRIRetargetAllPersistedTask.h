@class TRIPersistedTaskAttribution;

@interface TRIRetargetAllPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;

+ (id)descriptor;

@end
