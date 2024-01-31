@interface DownloadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (BOOL)checkLimits;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;
- (unsigned long long)maxFlows;
- (unsigned long long)minFlows;
- (void)updateResultsWithByteCount;
- (void)updateResultsWithFlowCount;
- (void)updateResultsWithThroughput:(long long)a0 confidence:(long long)a1;

@end
