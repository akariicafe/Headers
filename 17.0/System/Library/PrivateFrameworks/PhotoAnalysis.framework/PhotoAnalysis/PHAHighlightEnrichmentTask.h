@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _didProduceContent;
}

@property (nonatomic) unsigned long long tailorOptions;

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (BOOL)didProduceContent;

@end
