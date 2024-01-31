@class UIView, _UIVisualEffectBackdropView, UITableViewHeaderFooterView;

@interface CompletionListTableViewController : SFPopoverSizingTableViewController {
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;
    double _keyboardBottomInset;
    BOOL _shouldResetScrollOffsetOnNextLayout;
    double _webSearchTipProposedHeight;
}

@property (readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;
@property (retain, nonatomic) UIView *webSearchTipView;
@property (nonatomic) BOOL showsWebSearchTipIfExists;

+ (id)tableViewCellForSizeEstimation;
+ (void)configureCell:(id)a0 backgroundMode:(long long)a1 separatorStyle:(int)a2 shouldHaveTopPadding:(BOOL)a3 configurationStateDidChangeCallback:(id /* block */)a4;

- (void)viewSafeAreaInsetsDidChange;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)updateContentInsets;
- (void).cxx_destruct;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewIsAppearing:(BOOL)a0;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)a0;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (BOOL)_showingWebSearchTip;
- (void)_updateTableViewContentInset;
- (void)_updateWebSearchTipProposedHeightForTableViewWidth:(double)a0;
- (void)setNeedsScrollOffsetReset;

@end
