@interface IMDCKMockRecordKeyZone : IMDCKMockRecordZone

- (void)handleOperation:(id)a0;
- (void)_handleFetchingExitRecordOperation:(id)a0;
- (void)_handleWritingCloudKitMetrics:(id)a0;
- (BOOL)_operationIsCloudKitMetricsOperation:(id)a0;

@end
