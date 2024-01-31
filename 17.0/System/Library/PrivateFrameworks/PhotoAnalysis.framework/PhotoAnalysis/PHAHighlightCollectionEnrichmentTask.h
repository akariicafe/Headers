@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;

@end
