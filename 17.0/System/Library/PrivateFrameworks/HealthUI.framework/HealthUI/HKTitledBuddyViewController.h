@class UIStackView, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIVisualEffectView, HKTitledLogoBuddyHeaderView;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
}

@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)embedView:(id)a0 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)headerView;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)reloadViews;
- (id)titleString;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (id)titleImage;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (BOOL)shouldCustomizeNavigationBar;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;
- (id)linkButtonTitle;
- (id)subsequentViews;
- (void)_anchoredButtonTapped:(id)a0;
- (void)_createAnchoredButtons;
- (id)_createHeaderView;
- (void)linkButtonTapped:(id)a0;
- (BOOL)shouldHideNavigationBar;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)a0;

@end
