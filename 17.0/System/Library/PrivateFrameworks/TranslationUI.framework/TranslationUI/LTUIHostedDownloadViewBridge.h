@class UIViewController;

@interface LTUIHostedDownloadViewBridge : NSObject

@property (class, nonatomic, readonly) UIViewController *viewController;
@property (class, nonatomic, readonly) UIViewController *accessibilityViewController;

- (id)init;

@end
