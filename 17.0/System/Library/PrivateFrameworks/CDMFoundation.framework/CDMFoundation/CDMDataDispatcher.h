@interface CDMDataDispatcher : NSObject

+ (void)dispatchServiceSetupMetrics:(id)a0 selfMetadata:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchCdmPreprocessingWrapperData:(id)a0 requestId:(id)a1;
+ (void)dispatchCdmRequestData:(id)a0 requestId:(id)a1 withCurrentServiceGraph:(id)a2 dataDispatcherContext:(id)a3;
+ (void)dispatchCdmResponseData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchContextUpdateData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchCorrectedUtteranceTokenizationData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchCurrentTurnTokenizationData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchLVCData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchMDData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchMRData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchNLv4Data:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchPSCData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchPreviousTurnTokenizationData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchSELFRequestLink:(id)a0 dataDispatcherContext:(id)a1;
+ (void)dispatchSNLCData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)dispatchSpanizationData:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchUaaPData:(id)a0 withResponse:(id)a1 requestId:(id)a2;
+ (void)insertFeatureStore:(id /* block */)a0 requester:(id)a1 debugLog:(id)a2;
+ (void)waitForQueueCompletion;

@end
