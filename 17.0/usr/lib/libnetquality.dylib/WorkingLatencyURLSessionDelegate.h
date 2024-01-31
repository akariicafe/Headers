@class TrimmedMean, LatencySaturationDetection, NSMutableArray, NSDate;

@interface WorkingLatencyURLSessionDelegate : LatencyURLSessionDelegate {
    BOOL isDownlink;
    BOOL _probeLoadConnections;
    NSMutableArray *_workingSessions;
    NSMutableArray *_tcpTmpArray;
    TrimmedMean *_tcpTrim;
    NSMutableArray *_tlsTmpArray;
    TrimmedMean *_tlsTrim;
    NSMutableArray *_h2TmpArray;
    TrimmedMean *_h2Trim;
    NSMutableArray *_selfTmpArray;
    TrimmedMean *_selfTrim;
    LatencySaturationDetection *_saturation;
    BOOL _saturation_reached;
    NSDate *_start;
}

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (long long)getProbeTimeout;
- (long long)currentResponsivenessConfidenceValue;
- (void)executeTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 testName:(id)a1 queue:(id)a2 testEndpoint:(id)a3 resultsObject:(id)a4 resultsDelegate:(id)a5 urlSessions:(id)a6 tcpKey:(id)a7 tlsKey:(id)a8 reqrespKey:(id)a9 selfKey:(id)a10;
- (void)isDownlinkTest;
- (void)scheduleNewTaskForeign;
- (void)scheduleNewTaskSelf;
- (void)waitForSaturation:(id /* block */)a0;

@end
