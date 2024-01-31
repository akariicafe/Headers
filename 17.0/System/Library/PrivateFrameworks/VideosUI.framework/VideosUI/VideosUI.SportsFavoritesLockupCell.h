@interface VideosUI.SportsFavoritesLockupCell : VUIBaseListViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ hideTopSeparator;
    void /* unknown type, empty encoding */ hideBottomSeparator;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ logoImageView;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ topSeparatorView;
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
