@class NSString, OBTableHeaderFooterView, UIView, UITableView;

@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver>

@property (retain, nonatomic) OBTableHeaderFooterView *headerContainer;
@property (retain, nonatomic) OBTableHeaderFooterView *footerContainer;
@property (nonatomic) BOOL adoptTableViewScrollView;
@property (retain, nonatomic) UIView *hostedTableFooterView;
@property (retain, nonatomic) UIView *hostedTableHeaderView;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_setupScrollView;
- (void)loadView;
- (id)scrollView;
- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)a0;
- (void)_setTableView:(id)a0;
- (void)setTableFooterView:(id)a0;
- (void)setTableHeaderView:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (BOOL)_buttonTrayInlined;
- (void)_floatButtonTray;
- (void)_inlineButtonTray;
- (void)_insertPendingTableView;
- (void)_layoutButtonTray;
- (void)_layoutFooterContainerFloatButtonTray;
- (void)_layoutFooterContainerInlineButtonTray;
- (BOOL)_scrollContentUnderButtonTrayForGroupedStyle;
- (BOOL)_scrollViewContentIsUnderTray;
- (void)_setTableViewNonHeaderFooterDonation:(id)a0;
- (void)_setTableViewWithHeaderFooterDonation:(id)a0;
- (void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (void)_updateHeaderFooterViewSizeIfNeeded;
- (void)_updateHeaderTopOffsetConstraint;
- (void)_updateTableHeaderViewSizeIfNeeded;
- (BOOL)contentViewUnderButtonTray;
- (double)headerViewBottomToTableViewTopPadding;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)updateDirectionalLayoutMargins;

@end
