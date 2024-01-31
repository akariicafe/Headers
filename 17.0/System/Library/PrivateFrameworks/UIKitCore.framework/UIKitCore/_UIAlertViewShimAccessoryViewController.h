@class UIViewController;

@interface _UIAlertViewShimAccessoryViewController : UIViewController {
    UIViewController *_accessoryViewController;
    double _preferredHeight;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithAccessoryViewController:(id)a0;

@end
