@class UITableViewCell, UIBlurEffect;

@interface SFPopoverSizingTableViewController : UITableViewController {
    UIBlurEffect *_backgroundBlurEffect;
    BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
    BOOL _didHaveTranslucentAppearance;
    struct CGSize { double width; double height; } _lastLayoutContentSize;
    BOOL _updatePreferredContentSizeAfterNextLayout;
}

@property (class, readonly, nonatomic) double bottomContentPadding;
@property (class, readonly, nonatomic) UITableViewCell *tableViewCellForSizeEstimation;

@property (readonly, nonatomic) long long minimumNumberOfRows;
@property (readonly, nonatomic) long long maximumNumberOfRows;
@property (readonly, nonatomic) BOOL hasTranslucentAppearance;

+ (void)initialize;
+ (double)caculateHeightForTableView:(id)a0 targetGlobalRow:(long long)a1 outGlobalRow:(long long *)a2;

- (void)cancelKeyPressed;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)updatePreferredContentSize;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_backgroundBlurEffect;
- (BOOL)_needsTranslucentAppearanceUpdate;
- (void)_updateTranslucentAppearanceIfNeeded;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)a0;
- (void)updateTranslucentAppearance;

@end
