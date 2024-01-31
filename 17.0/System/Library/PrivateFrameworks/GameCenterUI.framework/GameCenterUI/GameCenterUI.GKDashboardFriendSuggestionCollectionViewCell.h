@interface GameCenterUI.GKDashboardFriendSuggestionCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ friendSuggestionLockupView;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (class, nonatomic, readonly) double horizontalPadding;

@property (nonatomic) void /* unknown type, empty encoding */ displayBackground;
@property (nonatomic) void /* unknown type, empty encoding */ wantsAdditionalHorizontalPadding;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)applyWithContact:(id)a0 previouslyInvited:(BOOL)a1;
- (void)setInviteButtonTitleColor:(id)a0;

@end
