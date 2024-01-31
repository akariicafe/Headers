@class NSString, NSXPCConnection, VSSpeechConnectionDelegateWrapper, NSObject;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL keepActive;
@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;

- (id)init;
- (void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)dealloc;
- (void)stopPresynthesizedAudioRequest:(id)a0;
- (void)endAudioPowerUpdate;
- (id)currentRequest;
- (void)getVoiceInfoForLanguageCode:(id)a0 name:(id)a1 footprint:(long long)a2 gender:(long long)a3 type:(long long)a4 reply:(id /* block */)a5;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (void)startSynthesisRequest:(id)a0;
- (void)getSubscribedVoiceAssetsWithClientID:(id)a0 forAccessoryID:(id)a1 reply:(id /* block */)a2;
- (id)currentAudioRequest;
- (id)availableVoicesForLanguageCode:(id)a0;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (void)getLocalVoiceAssetsForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)startPresynthesizedAudioRequest:(id)a0;
- (void)forwardStreamObject:(id)a0;
- (void)_connectionInvalidated;
- (void)startSpeechRequest:(id)a0;
- (void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (BOOL)isSystemSpeaking;
- (void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (void)cachePresynthesizedAudioRequest:(id)a0;
- (void).cxx_destruct;
- (void)stopVoicePreview;
- (void)startPhonemesRequest:(id)a0 phonemeSystem:(long long)a1 reply:(id /* block */)a2;
- (void)setSubscribedVoiceAssets:(id)a0 withClientID:(id)a1 forAccessoryID:(id)a2;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)invokeDaemon:(id /* block */)a0;
- (BOOL)queryPhaticCapabilityWithRequest:(id)a0;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)getLocalVoiceResources:(id /* block */)a0;
- (void)startVoicePreviewRequest:(id)a0 reply:(id /* block */)a1;
- (void)continueSpeechRequest:(id)a0;
- (void)updateWithConnectionIdentifier:(id)a0 keepActive:(BOOL)a1;
- (id)_remoteObject;
- (id)_remoteObjectSync;
- (void)killDaemon;
- (void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)availableFootprintsForVoice:(id)a0 languageCode:(id)a1;
- (void)getAllVoiceSubscriptionsWithReply:(id /* block */)a0;

@end
