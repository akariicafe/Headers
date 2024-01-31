@interface StickersUI.StickerEffectChooser : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ animatesSelectionChanges;
    void /* unknown type, empty encoding */ highlightView;
    void /* unknown type, empty encoding */ effects;
    void /* unknown type, empty encoding */ effectViews;
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ tapGr;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ selectedEffectIndex;
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)handleTap:(id)a0;

@end
