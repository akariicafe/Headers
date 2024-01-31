@interface MDMRSELFLoggingUtils : NSObject

+ (BOOL)emitEvent:(id)a0;
+ (id)createMentionDetectorEvaluatedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionDetectorEvaluatedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionResolverEvaluatedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionResolverEvaluatedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitMentionDetectorEvaluatedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithResultCandidateId:(id)a3 andWithRequester:(int)a4;
+ (BOOL)emitMentionResolverEvaluatedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithResultCandidateId:(id)a3 andWithRequester:(int)a4;

@end
