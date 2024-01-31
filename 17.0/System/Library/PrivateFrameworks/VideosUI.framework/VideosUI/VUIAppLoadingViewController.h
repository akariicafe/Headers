@class UIView, VUIAppSpinnerView;

@interface VUIAppLoadingViewController : UIViewController {
    VUIAppSpinnerView *_loadingView;
    UIView *_parentView;
    UIView *_principalView;
    BOOL _cancelLoading;
}

@property (nonatomic) BOOL loading;

- (void).cxx_destruct;
- (void)setView:(id)a0;

@end
