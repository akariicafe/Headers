@class UILabel, UIActivityIndicatorView;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController {
    id<PKLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_cancelButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
