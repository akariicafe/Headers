@class UIStackView, CPSHairlineView, NSArray, NSString, CPSInformationTemplateButtonsViewController, UILayoutGuide, NSLayoutConstraint, CPSInformationScrollView, UILabel, UIVisualEffectView;

@interface CPSInformationEntityViewController : CPSBaseTemplateViewController <CPSButtonDelegate, UIScrollViewDelegate, CPSInformationScrollViewDelegate, CPInformationTemplateProviding>

@property (retain, nonatomic) CPSInformationTemplateButtonsViewController *buttonsViewController;
@property (retain, nonatomic) CPSInformationScrollView *scrollView;
@property (retain, nonatomic) UIStackView *itemStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *centeringGuideConstraints;
@property (retain, nonatomic) UILayoutGuide *centeringGuide;
@property (retain, nonatomic) NSLayoutConstraint *itemStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *itemStackViewWidthConstraint;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) CPSHairlineView *hairlineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_scrollViewAccessoryInsetsDidChange:(id)a0;
- (void)_updateScrollViewInsets;
- (void)didSelectButton:(id)a0;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (void)updateWithInformationTemplate:(id)a0;
- (void)_updateHairline;
- (void)_setHairlineHidden:(BOOL)a0;
- (void)_updateCenteringGuideConstraints;
- (void)_updateItemStackView;
- (void)_viewDidLoad;
- (id)informationTemplate;
- (void)scrollViewContentSizeChanged:(id)a0;

@end
