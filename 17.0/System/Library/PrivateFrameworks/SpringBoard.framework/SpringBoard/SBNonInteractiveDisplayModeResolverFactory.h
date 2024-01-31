@class NSString, SBApplicationController, SBWindowScene;
@protocol SBFAuthenticationStatusProvider;

@interface SBNonInteractiveDisplayModeResolverFactory : NSObject <SBWindowingModeResolverFactory> {
    SBApplicationController *_applicationController;
    id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBWindowScene *_monitoredWindowScene;
}

@property (readonly, nonatomic) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplicationController:(id)a0 userAuthenticationProvider:(id)a1 monitoredWindowScene:(id)a2;
- (id)resolverForPhysicalDisplay:(id)a0;

@end
