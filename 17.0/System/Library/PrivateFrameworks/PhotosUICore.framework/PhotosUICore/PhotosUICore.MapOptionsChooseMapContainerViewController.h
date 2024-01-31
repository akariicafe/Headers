@interface PhotosUICore.MapOptionsChooseMapContainerViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ headerBlurredBackgroundView;
    void /* unknown type, empty encoding */ headerViewSeparator;
    void /* unknown type, empty encoding */ headerLabel;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollViewContentView;
    void /* unknown type, empty encoding */ chooseMapViewController;
    void /* unknown type, empty encoding */ contentLayoutGuide;
    void /* unknown type, empty encoding */ contentLayoutGuideTopConstraint;
    void /* unknown type, empty encoding */ viewModel;
}

- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
