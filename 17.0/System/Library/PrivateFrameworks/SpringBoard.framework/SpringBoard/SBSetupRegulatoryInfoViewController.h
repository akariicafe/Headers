@class UIScrollView, UIImageView;

@interface SBSetupRegulatoryInfoViewController : UIViewController {
    UIScrollView *_containerView;
    UIImageView *_regulatoryImageView;
}

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
