@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (unsigned long long)tailorOptions;

@end
