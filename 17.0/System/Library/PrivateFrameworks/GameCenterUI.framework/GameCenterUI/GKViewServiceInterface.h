@interface GKViewServiceInterface : NSXPCInterface

+ (void)_configureKVOTypes:(id)a0;
+ (id)challengeIssueHostViewControllerInterface;
+ (id)challengeIssueServiceViewControllerInterface;
+ (id)extensionHostInterface;
+ (id)extensionInterface;
+ (id)gameCenterHostViewControllerInterface;
+ (id)gameCenterServiceViewControllerInterface;
+ (id)matchmakerHostViewControllerInterface;
+ (id)matchmakerServiceViewControllerInterface;
+ (id)remoteFriendRequestViewControllerInterface;
+ (id)remoteSignInViewControllerInterface;
+ (id)serviceFriendRequestViewControllerInterface;
+ (void)setClassesForExtensionInterface:(id)a0;
+ (void)setClassesForHostInterface:(id)a0;
+ (id)signInServiceViewControllerInterface;
+ (id)turnBasedHostViewControllerInterface;
+ (id)turnBasedServiceViewControllerInterface;

@end
