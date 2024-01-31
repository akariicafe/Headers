@interface PHAAssetRevGeocodeEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)taskClassDependencies;
- (id)enrichmentProcessor;

@end
