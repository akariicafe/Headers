@interface PAREngagedCompletionCache : NSObject

+ (id)sharedInstance;

- (void)topEngagedResultsForInput:(id)a0 maxAmount:(long long)a1 completion:(id /* block */)a2;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (void)addEngagedResults:(id)a0;
- (void)clearEngagementsFromDate:(id)a0 toDate:(id)a1;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)clearEngagementsWithTitle:(id)a0 type:(int)a1;
- (void)clearAllCompletions;
- (void)clearAllEngagements;
- (void)clearCompletionsFromDate:(id)a0 toDate:(id)a1;
- (void)clearEngagementsWithTitle:(id)a0;

@end
