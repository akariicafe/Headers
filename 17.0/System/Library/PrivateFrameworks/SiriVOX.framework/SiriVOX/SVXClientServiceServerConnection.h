@class NSUUID, NSString, NSXPCConnection, SVXSessionManager, AFInstanceInfo, SVXDeviceSetupManager, NSMutableArray, SVXSpeechSynthesizer;
@protocol SVXPerforming, SVXClientServiceServerConnectionDelegate;

@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXSessionActivationListening, SVXAudioPowerUpdateListening, SVXSessionActivityListening> {
    NSXPCConnection *_xpcConnection;
    id<SVXPerforming> _performer;
    id<SVXClientServiceServerConnectionDelegate> _delegate;
    AFInstanceInfo *_instanceInfo;
    BOOL _isConfigured;
    NSMutableArray *_pendingBlocksAfterConfigure;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
}

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)pingWithReply:(id /* block */)a0;
- (void)invalidate;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (oneway void)activateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_getInstanceInfoWithCompletion:(id /* block */)a0;
- (oneway void)prewarmRequest:(id)a0;
- (void)_cleanUpXPCConnection;
- (void)_performBlockAfterConfigure:(id /* block */)a0;
- (id)_remoteServiceDelegateWithErrorHandler:(id /* block */)a0;
- (void)_updateInstanceInfo:(id)a0;
- (void)audioPowerDidEndUpdateForType:(long long)a0;
- (void)audioPowerWillBeginUpdateForType:(long long)a0 wrapper:(id)a1;
- (void)audioSessionDidBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (void)audioSessionWillBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (oneway void)cancelPendingSpeechSynthesisRequest:(id)a0;
- (void)configureWithDeviceSetupManager:(id)a0 sessionManager:(id)a1 speechSynthesizer:(id)a2;
- (oneway void)deactivateWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)enqueueSpeechSynthesisRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchAlarmAndTimerFiringContextWithCompletion:(id /* block */)a0;
- (oneway void)fetchAudioPowerWithType:(long long)a0 completion:(id /* block */)a1;
- (oneway void)fetchSessionActivityStateWithCompletion:(id /* block */)a0;
- (oneway void)fetchSessionStateWithCompletion:(id /* block */)a0;
- (void)getInstanceInfoWithCompletion:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0 performer:(id)a1 delegate:(id)a2;
- (oneway void)performManualEndpointing;
- (oneway void)preheatWithActivationSource:(long long)a0;
- (oneway void)prepareForDeviceSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)prewarmWithContext:(id)a0 completion:(id /* block */)a1;
- (void)sessionDidBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)sessionDidChangeFromState:(long long)a0 toState:(long long)a1;
- (void)sessionDidFailAppLaunchWithBundleIdentifier:(id)a0;
- (void)sessionDidResignActiveWithDeactivationContext:(id)a0;
- (void)sessionDidStartSoundWithID:(long long)a0;
- (void)sessionDidStopSoundWithID:(long long)a0 error:(id)a1;
- (void)sessionManager:(id)a0 didActivateWithContext:(id)a1;
- (void)sessionManager:(id)a0 didDeactivateWithContext:(id)a1;
- (void)sessionManager:(id)a0 didNotActivateWithContext:(id)a1 error:(id)a2;
- (void)sessionManager:(id)a0 willActivateWithContext:(id)a1;
- (void)sessionManager:(id)a0 willDeactivateWithContext:(id)a1;
- (void)sessionWillBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)sessionWillChangeFromState:(long long)a0 toState:(long long)a1;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(id)a0;
- (void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)a0;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)a0 duration:(double)a1;
- (void)sessionWillStartSoundWithID:(long long)a0;
- (oneway void)setDeviceSetupContext:(id)a0;
- (oneway void)stopSpeechSynthesisRequest:(id)a0;
- (oneway void)synthesizeRequest:(id)a0 handlerUUID:(id)a1 completion:(id /* block */)a2;
- (oneway void)transitToAutomaticEndpointingWithTimestamp:(unsigned long long)a0;

@end
