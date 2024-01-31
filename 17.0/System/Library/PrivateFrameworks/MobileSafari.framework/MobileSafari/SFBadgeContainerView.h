@class UIColor, SFBadge, SFBadgeMaskView, UIView;

@interface SFBadgeContainerView : UIView {
    SFBadge *_badge;
    SFBadgeMaskView *_badgeMask;
}

@property (nonatomic) BOOL showsBadge;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL positionsBadgeRelativeToLayoutMargins;
@property (retain, nonatomic) UIColor *badgeTintColor;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pulse;

@end
