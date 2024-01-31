@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep

- (void)reset;
- (id)shortDescription;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
