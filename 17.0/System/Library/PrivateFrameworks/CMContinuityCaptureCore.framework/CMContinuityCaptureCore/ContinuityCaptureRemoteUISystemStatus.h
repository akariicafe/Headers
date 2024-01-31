@class AVSystemController, TUCallCenter, NSMutableSet, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ContinuityCaptureRemoteUISystemStatus : ContinuityCaptureRemoteUIPowerButtonStatus {
    NSObject<OS_dispatch_queue> *_queue;
    TUCallCenter *_callCenter;
    AVSystemController *_avSystemController;
    NSMutableSet *_incomingCallIDs;
    NSHashTable *_observers;
    NSMutableSet *_activeCallIds;
    BOOL _hasActiveCallAudioSession;
    unsigned int _preventSystemSleepAssertionID;
    _Atomic long long _callState;
    BOOL _invalidated;
}

@property (nonatomic) BOOL invalidated;
@property (readonly) long long callState;

+ (id)sharedInstance;
+ (void)invalidate;

- (id)initWithQueue:(id)a0;
- (void)removeObserver:(id)a0;
- (void)invalidate;
- (void)_handleCallStatusChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_avSystemControllerProcessDied;
- (void)_handleCall:(id)a0;
- (void)_handleCallAudioSessionActiveNotification:(id)a0;
- (void)_resolveActiveCallState;
- (void)_setupAVSystemController;
- (unsigned long long)activeCallCountOnMainQueue;
- (void)holdIdleSleepAssertionForReason:(id)a0;
- (void)releaseCurrentIdleSleepAssertion;
- (void)setupCallStateMonitoring;

@end
