@class UIView, NSString, CPDashboardButton, UIImageView, UIButton, NSLayoutConstraint, CPSAbridgableLabel, UIColor;
@protocol CPSButtonDelegate;

@interface CPSDashboardItemView : UIView <CRSUIDashboardFocusableItemProviding>

@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *focusBackgroundView;
@property (nonatomic) unsigned long long layoutAxis;
@property (retain, nonatomic) NSLayoutConstraint *subtitleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelConnectingConstraint;
@property (readonly, nonatomic) CPDashboardButton *dashboardButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<CPSButtonDelegate> delegate;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setup;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideSubtitle;
- (void)focusableItemFocused:(BOOL)a0;
- (void)focusableItemPressed:(BOOL)a0;
- (void)focusableItemSelected;
- (void)_touchDown:(id)a0;
- (void)_buttonTriggered:(id)a0;
- (void)_touchEnded:(id)a0;
- (id)initWithDashboardButton:(id)a0 layoutAxis:(unsigned long long)a1;

@end
