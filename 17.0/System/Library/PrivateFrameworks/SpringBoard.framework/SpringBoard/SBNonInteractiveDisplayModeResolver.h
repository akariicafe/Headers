@class FBSDisplayIdentity, NSString, SBApplicationController, SBWindowScene;
@protocol SBDisplayWindowingModeResolverDelegate, SBFAuthenticationStatusProvider;

@interface SBNonInteractiveDisplayModeResolver : NSObject <SBWindowingModeResolver> {
    FBSDisplayIdentity *_rootDisplayIdentity;
    SBApplicationController *_applicationController;
    id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBWindowScene *_monitoredWindowScene;
    BOOL _nonInteractiveModeAvailableOnPhysicalDisplay;
    BOOL _haveAuthenticatedOnce;
}

@property (weak, nonatomic) id<SBDisplayWindowingModeResolverDelegate> delegate;
@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly, nonatomic) long long displayWindowingMode;
@property (readonly, nonatomic) BOOL isWindowingModeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_appProcessStateDidChange:(id)a0;
- (void)_authenicationStateDidChange:(id)a0;
- (void)_evaluateAndNotifyOfStateChanges;
- (id)initWithRootDisplay:(id)a0 applicationController:(id)a1 userAuthenticationProvider:(id)a2 monitoredWindowScene:(id)a3;

@end
