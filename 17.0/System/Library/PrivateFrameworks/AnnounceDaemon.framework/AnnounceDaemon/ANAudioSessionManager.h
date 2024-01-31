@class NSUUID, ANTimer, AVAudioSession, NSObject, ANTelephonyObserver;
@protocol OS_dispatch_queue, OS_os_log;

@interface ANAudioSessionManager : NSObject <ANTelephonyObserverDelegate>

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) ANTimer *deactivationTimer;
@property (retain, nonatomic) ANTimer *activationRetryTimer;
@property (nonatomic) BOOL canRetryAudioSessionActivation;
@property (readonly, nonatomic) ANTelephonyObserver *telephonyObserver;
@property (copy, nonatomic) id /* block */ waitForCallEndCompletion;
@property (retain, nonatomic) ANTimer *callEndTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_activateAudioSessionWithCompletionHandler:(id /* block */)a0;
- (void)_deactivateAudioSession;
- (void)activateAudioSessionWithCompletionHandler:(id /* block */)a0;
- (BOOL)activateAudioSessionWithError:(id *)a0;
- (void)deactivateAudioSessionAfterDelay:(double)a0;
- (id)initWithAudioSession:(id)a0 queue:(id)a1 endpointID:(id)a2;
- (id)makeTimerIdentifier;
- (void)observer:(id)a0 didUpdateActiveCallStatus:(BOOL)a1;
- (void)startCallEndTimer;

@end
