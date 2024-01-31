@interface NewsFeed.DebugFormatDebuggerSourceViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ highlightView;
    void /* unknown type, empty encoding */ breakpointHitCountLabel;
    void /* unknown type, empty encoding */ lineNumberLabel;
    void /* unknown type, empty encoding */ edgeView;
    void /* unknown type, empty encoding */ edgeViewPadding;
    void /* unknown type, empty encoding */ lineAndHighlightSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_charSize;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
