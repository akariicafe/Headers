@interface NewsFeed.DebugFormatUploadDiffViewController : UIViewController {
    void /* unknown type, empty encoding */ changeSet;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ remoteDiffView;
    void /* unknown type, empty encoding */ remoteDiffGutterView;
    void /* unknown type, empty encoding */ localDiffView;
    void /* unknown type, empty encoding */ localDiffGutterView;
    void /* unknown type, empty encoding */ changeSetLabel;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doDismiss;

@end
