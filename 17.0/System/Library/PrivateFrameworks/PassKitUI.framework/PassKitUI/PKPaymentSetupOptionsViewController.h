@class UIFont, NSString, PKPaymentSetupDockView, PKCollapsibleHeaderView, PKPaymentProvisioningController, PKPaymentSetupNoResultsView, OBPrivacyLinkController, UIActivityIndicatorView, PKPaymentSetupPrivacyLinkSectionController, _PKVisibilityBackdropView, UIBarButtonItem, UIColor;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupOptionsViewController : PKDynamicCollectionViewController <_PKVisibilityBackdropViewDelegate, PKCollapsibleHeaderViewDelegate> {
    double _headerHeight;
    PKPaymentSetupNoResultsView *_noResultsView;
    BOOL _viewDidAppear;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _wasBackHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showNoResultsView;
    PKPaymentSetupDockView *_dockView;
    PKPaymentSetupPrivacyLinkSectionController *_privacyLinkSectionController;
    _PKVisibilityBackdropView *_blurringView;
    double _backdropWeight;
}

@property (nonatomic) unsigned long long headerMode;
@property (readonly, nonatomic) PKCollapsibleHeaderView *headerView;
@property (copy, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIColor *headerBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL shouldCollapseHeaderOnKeyboardShow;
@property (nonatomic) BOOL showSearchBar;
@property (nonatomic) BOOL showHeaderSpinner;
@property (nonatomic) BOOL showNavigationBarSpinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)_init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateNavigationItem;
- (void)_addDockViewToCollectionViewIfNeeded;
- (void)_keyboardSizeDidChange:(id)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (double)footerViewContentHeight;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)removeSetupDockView;
- (void)searchBarCancelButtonClicked;
- (void)searchBarTextDidBeginEditing;
- (void)searchBarTextDidEndEditing;
- (void)searchTextDidChangeTo:(id)a0;
- (void)setNoResultsActionButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setNoResultsIcon:(id)a0;
- (void)setNoResultsSubtitle:(id)a0;
- (void)setNoResultsTitle:(id)a0;
- (void)setSearchBarDefaultText:(id)a0;
- (void)setSections:(id)a0 animated:(BOOL)a1;
- (void)setShowNoResultsView:(BOOL)a0 animated:(BOOL)a1;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
