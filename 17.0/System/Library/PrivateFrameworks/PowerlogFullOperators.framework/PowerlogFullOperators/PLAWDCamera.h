@class PLEntryNotificationOperatorComposition;

@interface PLAWDCamera : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *cameraEventCallbackTorch;
@property BOOL prevFrontCameraState;
@property BOOL prevBackCameraState;
@property BOOL prevTorchCameraState;
@property double frontCameraTimestamp;
@property double backCameraTimestamp;
@property double torchCameraTimestamp;
@property long long cameraSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdCamera;
+ (id)getSharedObjWithOperator:(id)a0;

- (void).cxx_destruct;
- (void)initCameraStats;
- (void)addEntryToCameraTable:(id)a0 withValue:(double)a1;
- (void)handleBackCameraCallback:(id)a0;
- (void)handleCameraCallback:(id)a0;
- (void)handleFrontCameraCallback:(id)a0;
- (void)handleTorchCameraCallback:(id)a0;
- (void)reInitCameraStats;
- (void)resetCameraTable;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;

@end
