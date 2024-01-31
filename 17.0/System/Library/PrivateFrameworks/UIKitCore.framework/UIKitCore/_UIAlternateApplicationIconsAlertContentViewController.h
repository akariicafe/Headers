@class NSString, UILabel;

@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController {
    UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *messageText;

- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)__updateWithVisualStyle:(id)a0;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)a0;
- (void)_updateWithContainingAlertControllerVisualStyle;

@end
