@class UIColor, SUUIBorderView;

@interface SUUITableViewCell : UITableViewCell {
    SUUIBorderView *_bottomBorderView;
    SUUIBorderView *_topBorderView;
    double _titlePaddingLeft;
}

@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (copy, nonatomic) UIColor *topBorderColor;
@property (nonatomic) double borderPaddingLeft;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textLabelInsets;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_reloadBorderVisibility;

@end
