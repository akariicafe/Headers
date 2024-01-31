@class SBTraitsOrientedContentViewController;
@protocol SBResizableContentViewControllerDelegate;

@interface SBTraitsOrientedResizableContentViewController : SBFTouchPassThroughViewController {
    id<SBResizableContentViewControllerDelegate> _delegate;
    SBTraitsOrientedContentViewController *_contentViewController;
}

- (void)viewDidLayoutSubviews;
- (id)contentViewController;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithContentViewController:(id)a0 delegate:(id)a1;

@end
