@class UIColor, UIView;

@interface SUUICollectionViewCell : UICollectionViewCell {
    UIView *_bottomBorderView;
    long long _position;
    UIView *_leftBorderView;
    UIView *_rightBorderView;
    UIView *_topBorderView;
}

@property (nonatomic) long long separatorStyle;
@property (nonatomic) BOOL showsCellSeparators;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorWidths;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInsets;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setPosition:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)_showsTopBorder;
- (BOOL)_showsBottomBorder;
- (BOOL)_showsLeftBorder;
- (BOOL)_showsRightBorder;
- (void)_updateBorderVisibility;

@end
