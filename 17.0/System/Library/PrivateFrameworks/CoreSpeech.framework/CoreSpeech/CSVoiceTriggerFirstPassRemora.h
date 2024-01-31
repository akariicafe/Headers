@class CSAsset, NSMutableDictionary, CSAudioProvider, NSString, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate, CSSecondPassProgressDelegate;

@interface CSVoiceTriggerFirstPassRemora : NSObject <CSActivationEventNotificationHandlerDelegate, CSAccessorySiriClientBehaviorMonitorDelegate, CSSecondPassProgressProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *remoraSecondPassRequests;
@property (retain, nonatomic) NSMutableDictionary *accessoryFirstPassGoodnessScores;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSMutableDictionary *triggeredAudioStreamHoldingByAccessoryId;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (weak, nonatomic) id<CSSecondPassProgressDelegate> secondPassProgressDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)cancelSecondPassRunning;
- (void)_reset;
- (void)start;
- (void)pendingSecondPassTriggerWasClearedForClient:(unsigned long long)a0 deviceId:(id)a1;
- (void).cxx_destruct;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)_cancelAllAudioStreamHoldings;
- (void)_cancelAudioStreamHoldingForAccessoryWithId:(id)a0;
- (void)_createSecondPassRequestIfNecessaryForActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleRemoraTriggerEvent:(id)a0 secondPassRequest:(id)a1 completion:(id /* block */)a2;
- (void)_handleSecondPassResult:(id)a0 secondPassRequest:(id)a1 deviceId:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)_requestStartAudioStreamProviderWithContext:(id)a0 secondPassRequest:(id)a1 startStreamOption:(id)a2 completion:(id /* block */)a3;
- (void)_setDeviceIds:(id)a0;
- (void)_setIsSecondPassing:(BOOL)a0 forDeviceId:(id)a1;
- (void)accessorySiriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4 forAccessory:(id)a5;
- (void)accessorySiriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 reason:(unsigned long long)a2 withEventUUID:(id)a3 forAccessory:(id)a4;
- (void)accessorySiriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2 forAccessory:(id)a3;
- (void)accessorySiriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2 forAccessory:(id)a3;
- (void)setConnectedDeviceIds:(id)a0;

@end
