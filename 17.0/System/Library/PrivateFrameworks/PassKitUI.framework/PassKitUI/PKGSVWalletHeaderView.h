@class NSString, UIActivityIndicatorView, PKPGSVSectionHeader_BackgroundProvisioningHintView, UILabel, PKButtonBadgeView, UIButton;
@protocol PKGSVWalletHeaderViewDelegate, PKPGSVSectionHeaderDelegate;

@interface PKGSVWalletHeaderView : UIView <PKPGSVSectionHeaderView> {
    BOOL _sizesDirty;
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIButton *_inboxButton;
    PKButtonBadgeView *_inboxBadge;
    UIButton *_orderManagementButton;
    UIActivityIndicatorView *_activityIndicator;
    PKPGSVSectionHeader_BackgroundProvisioningHintView *_backgroundProvisioningHintView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margins;
    id<PKGSVWalletHeaderViewDelegate> _delegate;
    id<PKPGSVSectionHeaderDelegate> _headerDelegate;
}

@property (readonly, nonatomic) unsigned long long passType;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)trailingView;
- (id)leadingView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHeaderDelegate:(id)a0;
- (void)_addTapped;
- (id)_inboxBadgeValue;
- (void)_inboxTapped;
- (BOOL)_shouldShowInboxButton;
- (void)_showOrderManagement;
- (void)addTapped;
- (void)inboxTapped;
- (id)initWithPassType:(unsigned long long)a0 state:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a1 delegate:(id)a2;
- (BOOL)needsRemoval;
- (void)setSectionsState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0;
- (void)setShowBackgroundProvisioningHint:(BOOL)a0 animated:(BOOL)a1;
- (void)showOrderManagement;

@end
