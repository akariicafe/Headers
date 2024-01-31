@interface CDMMentionResolverServiceUtils : NSObject

+ (id)buildMRRequestWithCurTurn:(id)a0 tokenChain:(id)a1 mdResponse:(id)a2 contextualSpanMatcherResponse:(id)a3 embedding:(id)a4 utterance:(id)a5 turnIndex:(unsigned long long)a6 nluRequestId:(id)a7 resultCandidateId:(id)a8 cdmRequestId:(id)a9;
+ (id)includeWhitespaceInIndices:(id)a0 tokenchain:(id)a1;
+ (void)logMRRequestToFile:(id)a0;
+ (void)logMRResponseToFile:(id)a0;

@end
