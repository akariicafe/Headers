@interface HUTileCellBackgroundView : UIView {
    void /* unknown type, empty encoding */ currentEffectIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualEffectView;
    void /* unknown type, empty encoding */ dashedBorderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controlCenterTileOffMaterialView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ effectGrouper;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithEffectIdentifier:(id)a0 effectGrouper:(id)a1;
- (void)updateWithEffectIdentifier:(id)a0;

@end
