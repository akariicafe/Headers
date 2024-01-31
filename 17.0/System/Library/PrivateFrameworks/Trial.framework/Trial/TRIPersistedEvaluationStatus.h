@class NSString, TRIPBTimestamp, TRIPersistedFactorsState;

@interface TRIPersistedEvaluationStatus : TRIPBMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) BOOL hasEvaluationId;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) TRIPersistedFactorsState *evalState;
@property (nonatomic) BOOL hasEvalState;

+ (id)descriptor;

@end
