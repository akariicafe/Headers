@class CAMSemanticStyleSettingsRootController;
@protocol CAMSemanticStyleSettingsControllerDelegate;

@interface CAMSemanticStyleSettingsController : UINavigationController

@property (readonly, nonatomic) CAMSemanticStyleSettingsRootController *_rootController;
@property (weak, nonatomic) id<CAMSemanticStyleSettingsControllerDelegate> controllerDelegate;

- (long long)preferredInterfaceOrientationForPresentation;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
