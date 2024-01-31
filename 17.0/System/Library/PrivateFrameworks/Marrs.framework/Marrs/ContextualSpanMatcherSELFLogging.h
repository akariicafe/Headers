@interface ContextualSpanMatcherSELFLogging : NSObject

+ (BOOL)emitEvent:(id)a0;
+ (id)createContextualSpanMatcherEndedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createContextualSpanMatcherEndedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitContextualSpanMatcherEndedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithResultCandidateId:(id)a3 andWithRequester:(int)a4;

@end
