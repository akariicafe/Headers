@class NSString, HDWorkoutManager, NSMutableDictionary;

@interface HDWorkoutMirroringManager : NSObject <HDProfileReadyObserver, HDRapportMessengerObserver> {
    HDWorkoutManager *_workoutManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_assertionsByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_createServerWithData:(id)a0 completion:(id /* block */)a1;
- (void)_takeBackgroundRuntimeAssertionForProcessWithBundleIdentifier:(id)a0 pid:(int)a1;
- (id)activeSessionBundleIdentifier;
- (id)initWithWorkoutManager:(id)a0;
- (void)launchClientWithBundleIdentifier:(id)a0;
- (void)rapportMessenger:(id)a0 didReceiveRequest:(id)a1 data:(id)a2 responseHandler:(id /* block */)a3;
- (void)recoverMirroredWorkoutSessionWithCompletion:(id /* block */)a0;
- (void)setActiveSessionBundleIdentifier:(id)a0;

@end
