@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
