@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)enrichmentProcessor;

@end
