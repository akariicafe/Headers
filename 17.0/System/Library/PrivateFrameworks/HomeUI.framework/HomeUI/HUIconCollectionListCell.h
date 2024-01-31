@class HUIconView, UIColor, UICellAccessoryCustomView, HFItem, NSLayoutConstraint, UIView, NSString;
@protocol HUResizableCellDelegate, HUIconCollectionListCellDelegate;

@interface HUIconCollectionListCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) NSLayoutConstraint *iconSizeConstraint;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UICellAccessoryCustomView *iconAccessoryView;
@property (nonatomic) BOOL isAnimatingPop;
@property (retain, nonatomic) UIColor *iconForegroundColor;
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor;
@property (nonatomic) double iconAlpha;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long iconDisplayStyle;
@property (nonatomic) BOOL iconTintColorFollowsDisabledState;
@property (nonatomic) BOOL separatorInsetLinesUpWithText;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic) BOOL enableTappableIcon;
@property (weak, nonatomic) id<HUIconCollectionListCellDelegate> delegate;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)_createIconView;
- (id)configurationState;
- (void)updateAccessories;
- (id)_buildAccessories;
- (void)_iconTapped:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
