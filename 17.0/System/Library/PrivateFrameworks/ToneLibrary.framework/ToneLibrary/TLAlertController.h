@class NSString, NSMapTable, TLAlertQueuePlayerController, NSObject, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}

@property (class, readonly) TLAlertController *sharedAlertController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_playbackBackEndForAlertType:(long long)a0 topic:(id)a1;
+ (long long)_playbackBackEndForAlert:(id)a0;
+ (BOOL)_shouldStopAlertForUserInterruption:(id)a0;

- (id)init;
- (id)_prepareForPlayingAlert:(id)a0;
- (BOOL)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)dealloc;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1;
- (id)_queuePlayerController;
- (BOOL)_stopAllAlertsInCurrentProcessWithUserInterruptionDate:(id)a0;
- (id)_systemSoundController;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_didCompletePlaybackOfAlert:(id)a0;
- (BOOL)stopAllAlerts;
- (void)_handleUserInterruptionNotification:(id)a0;
- (void)_didReachTimeoutForAlert:(id)a0;
- (void).cxx_destruct;
- (BOOL)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (id)_controllerForPlaybackBackEnd:(long long)a0;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;
- (void)_assertRunningOnAccessQueue;

@end
