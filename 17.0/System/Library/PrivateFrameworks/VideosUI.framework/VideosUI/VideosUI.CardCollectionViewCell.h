@interface VideosUI.CardCollectionViewCell : VUIFloatingCollectionViewCell {
    void /* unknown type, empty encoding */ isLockupSelected;
    void /* unknown type, empty encoding */ isLockupSelectionHidden;
    void /* unknown type, empty encoding */ isLockupOutlined;
    void /* unknown type, empty encoding */ cardViewLayout;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ syndicationId;
}

- (void)imageViewHandler:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dragStateDidChange:(long long)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;

@end
