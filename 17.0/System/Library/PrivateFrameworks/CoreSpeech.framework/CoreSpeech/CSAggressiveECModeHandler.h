@class CSAttSiriAudioSessionStateClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAggressiveECModeHandler : NSObject <CSAttSiriSessionStateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAttSiriAudioSessionStateClient *siriStateClient;
@property (nonatomic) BOOL audioSessionStateActive;
@property (nonatomic) BOOL echoCancellationDeferred;
@property (nonatomic) BOOL inAttendingWindow;
@property (nonatomic) BOOL aggressiveEchoCancellationApplied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setAttendingState:(BOOL)a0;
- (void)siriDismissed;
- (void)_configureAggressiveEchoCancellationParams:(BOOL)a0;
- (void)notifySiriSessionStateChange:(BOOL)a0;
- (void)notifySiriSessionStateTTSOngoing:(BOOL)a0;
- (void)setAudioSessionState:(id)a0;

@end
