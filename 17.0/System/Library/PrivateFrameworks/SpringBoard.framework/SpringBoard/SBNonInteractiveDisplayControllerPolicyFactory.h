@class NSString, FBSceneManager, SBApplicationController, SBWindowScene;

@interface SBNonInteractiveDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory> {
    FBSceneManager *_fbSceneManager;
    SBWindowScene *_monitoredWindowScene;
    SBApplicationController *_applicationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
