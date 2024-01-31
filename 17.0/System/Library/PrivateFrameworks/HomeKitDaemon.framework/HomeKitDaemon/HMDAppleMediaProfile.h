@class NSString, HMDAppleMediaAccessory, HMDMediaSystem, MPRequestResponseController;

@interface HMDAppleMediaProfile : HMDMediaProfile <MPRequestResponseControllerDelegate>

@property (readonly, weak) HMDAppleMediaAccessory *mediaAccessory;
@property (readonly) MPRequestResponseController *controller;
@property (weak, nonatomic) HMDMediaSystem *mediaSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didFinishLoadingRequestForController:(id)a0;
- (void)registerForMessages;
- (void)setMediaSession:(id)a0;
- (void)_handleSetPower:(id)a0;
- (void)_handleSetValue:(id)a0 withRequestProperty:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0 configurationTracker:(id)a1;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2 workQueue:(id)a3;
- (void)sessionAudioControlUpdated:(id)a0;
- (void)didUpdateSleepWakeState:(unsigned long long)a0;

@end
