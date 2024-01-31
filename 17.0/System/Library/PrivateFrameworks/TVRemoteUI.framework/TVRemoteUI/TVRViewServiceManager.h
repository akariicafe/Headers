@class NSString, TVRViewServiceConfigContext, SBSRemoteAlertHandle;

@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) TVRViewServiceConfigContext *viewServiceContext;
@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (readonly, nonatomic) BOOL canLaunchAsAnApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)dismiss;
- (void)prewarm;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)presentWithContext:(id)a0;
- (void)_launchViewServiceSuspended;
- (id)_actionForSetting:(unsigned long long)a0 animationBlock:(id /* block */)a1;
- (void)_fetchActiveEndpointUID;
- (void)_prewarmWithLaunchViewService:(BOOL)a0 fetchActiveEndpoint:(BOOL)a1;
- (id)_settingNameForValue:(unsigned long long)a0;

@end
