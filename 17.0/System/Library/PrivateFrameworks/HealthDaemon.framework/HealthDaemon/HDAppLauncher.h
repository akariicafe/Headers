@class FBSOpenApplicationService, NSString, HDAssertionManager, NSMutableDictionary, HDProcessStateManager, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface HDAppLauncher : NSObject <HDProcessStateObserver, HDAssertionObserver> {
    HDProcessStateManager *_processStateManager;
    FBSOpenApplicationService *_openApplicationService;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableDictionary *_registeredAssertionsByIdentifier;
    NSMutableSet *_monitoredProcessBundleIdentifiers;
    NSMutableSet *_launchingProcessBundleIdentifiers;
    double _launchCountResetThreshold;
    double _baseLaunchDelay;
    long long _maxLaunchCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)takeKeepAliveAssertionForApplicationBundleIdentifier:(id)a0 processBundleIdentifier:(id)a1 payloadOptions:(id)a2;
- (BOOL)unitTest_hasAssertionForBundleIdentifier:(id)a0;
- (void)processTerminated:(id)a0;
- (void)unitTest_setBaseLaunchDelay:(double)a0 launchCountResetThreshold:(double)a1 maxLaunchCount:(long long)a2;
- (void).cxx_destruct;
- (id)initWithProcessStateManager:(id)a0 openApplicationService:(id)a1;

@end
