@interface SBAppSwitcherPageServiceRemoteViewController : _UIRemoteViewController <_SBUISwitcherPageHostInterface>

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
