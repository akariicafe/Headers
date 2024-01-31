@class CSSiriClientBehaviorMonitor, NSString, CSEndpointerMetrics, NSObject, CSAttSiriEndpointerNode;
@protocol OS_dispatch_queue;

@interface CSEndpointDetectedSelfLogger : NSObject <CSSiriClientBehaviorMonitorDelegate, CSAttSiriEndpointerNodeDelegate, CSAttSiriRecognitionTaskCompletionReceiver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL localSRDisabled;
@property (nonatomic) BOOL trpDetectDelivered;
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (retain, nonatomic) CSEndpointerMetrics *cachedRelaxedEndpointerMetrics;
@property (retain, nonatomic) NSString *mhId;
@property (weak, nonatomic, setter=registerEndpointerNode:) CSAttSiriEndpointerNode *endpointerNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_decodeFeaturesAtEndpoint:(id)a0 endpointerModelType:(long long)a1;
+ (void)emitEndpointDetectedEventWithEndpointerMetrics:(id)a0 withEndpointerModelType:(long long)a1 withTrpId:(id)a2 withMhID:(id)a3;

- (id)init;
- (void)reset;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)setup;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)attSiriNode:(id)a0 didDetectEndpointEventAtTime:(double)a1 eventType:(long long)a2 withMetrics:(id)a3 useEndpointerSignal:(BOOL)a4;
- (void)attSiriNode:(id)a0 didDetectHardEndpointAtTime:(double)a1 withMetrics:(id)a2 usesAutomaticEndPointing:(BOOL)a3;
- (void)attSiriNode:(id)a0 didDetectStartpointAtTime:(double)a1;
- (void)attSiriNode:(id)a0 selectedTRPId:(id)a1 withMetrics:(id)a2;
- (void)didCompleteRecognitionTaskWithStatistics:(id)a0 requestId:(id)a1 endpointMode:(long long)a2 error:(id)a3;

@end
