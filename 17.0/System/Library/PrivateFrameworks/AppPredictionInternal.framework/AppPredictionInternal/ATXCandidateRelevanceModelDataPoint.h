@class ATXCandidate, ATXPredictionContext, NSUUID;

@interface ATXCandidateRelevanceModelDataPoint : NSObject

@property (retain, nonatomic) ATXCandidate *candidate;
@property (nonatomic) BOOL engaged;
@property (readonly, nonatomic) ATXPredictionContext *context;
@property (readonly, nonatomic) NSUUID *contextDefinedSessionId;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 candidate:(id)a1 engaged:(BOOL)a2 contextDefinedSessionId:(id)a3;

@end
