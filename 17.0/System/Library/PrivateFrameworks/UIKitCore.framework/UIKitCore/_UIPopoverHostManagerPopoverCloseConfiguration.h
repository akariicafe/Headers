@class UIWindow;
@protocol UIViewControllerTransitionCoordinator;

@interface _UIPopoverHostManagerPopoverCloseConfiguration : NSObject

@property (retain, nonatomic) UIWindow *popoverWindow;
@property (retain, nonatomic) UIWindow *parentWindow;
@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;

- (void).cxx_destruct;

@end
