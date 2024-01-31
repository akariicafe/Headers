@class NSString, NSUUID, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraStream : HMCameraSource <HMFMessageReceiver>

@property (readonly, copy) NSString *sessionID;
@property unsigned long long internalAudioStreamSetting;
@property (copy) NSNumber *internalAudioVolume;
@property (readonly, nonatomic) NSNumber *audioVolume;
@property (readonly, nonatomic) unsigned long long audioStreamSetting;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)a0 withError:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithProfileUniqueIdentifier:(id)a0 sessionID:(id)a1 slotIdentifier:(id)a2 aspectRatio:(id)a3 audioStreamSetting:(unsigned long long)a4;
- (void)setAudioStreamSetting:(unsigned long long)a0;
- (void)updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;

@end
