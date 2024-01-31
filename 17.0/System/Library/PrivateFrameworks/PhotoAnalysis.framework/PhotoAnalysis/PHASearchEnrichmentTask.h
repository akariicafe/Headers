@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
