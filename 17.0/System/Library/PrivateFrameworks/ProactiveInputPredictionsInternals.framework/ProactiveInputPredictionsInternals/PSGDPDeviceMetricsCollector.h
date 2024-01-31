@class IDSService, SGQuickResponsesStore, NSObject;
@protocol OS_dispatch_queue, SGXPCActivityManagerProtocol;

@interface PSGDPDeviceMetricsCollector : NSObject {
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_queue;
    SGQuickResponsesStore *_store;
}

+ (id)recorderForKey:(id)a0;
+ (id)getActiveTrialInformationWithWithXPCActivityManager:(id)a0 activity:(id)a1;
+ (id)getPrefixFromRolloutID:(id)a0 factorPackId:(id)a1 experimentId:(id)a2 treatmentId:(id)a3;
+ (id /* block */)onCompletionWithXPCActivityManager:(id)a0 activity:(id)a1 engagementMetrics:(id)a2 idsService:(id)a3 destinationDevice:(id)a4;
+ (id /* block */)onDeltaRowWithXPCActivityManager:(id)a0 activity:(id)a1 engagementMetrics:(id)a2;
+ (BOOL)recordEngagementMetrics:(id)a0 selectedRecorder:(id)a1 ignoredRecorder:(id)a2;
+ (BOOL)recordResponse:(id)a0 numTimesToLog:(unsigned long long)a1 recorder:(id)a2 prefix:(id)a3;
+ (BOOL)sendEngagementToDPUsingData:(id)a0;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)collectDeviceQREngagement:(id)a0;
- (id)initAsDelegate;
- (id)initWithActivityManager:(id)a0;
- (id)initWithActivityManager:(id)a0 idsService:(id)a1 queue:(id)a2 store:(id)a3;
- (BOOL)syncQREngagementToPairedDeviceWithActivity:(id)a0;

@end
