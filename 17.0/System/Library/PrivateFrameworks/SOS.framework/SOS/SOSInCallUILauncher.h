@class NSString, SOSProcessObserver;

@interface SOSInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, SOSProcessObserverDelegate>

@property (class, readonly, nonatomic) SOSInCallUILauncher *sharedInCallUILauncher;

@property (retain, nonatomic) SOSProcessObserver *processObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SOSRemoteAlertActivationReasonForSOSInCallUILaunchReason:(long long)a0;

- (void).cxx_destruct;
- (void)launchInCallUIForReason:(long long)a0 withRequestURL:(id)a1 completion:(id /* block */)a2;
- (void)processObserver:(id)a0 bundleIdentifier:(id)a1 didUpdateApplicationRunning:(BOOL)a2;

@end
