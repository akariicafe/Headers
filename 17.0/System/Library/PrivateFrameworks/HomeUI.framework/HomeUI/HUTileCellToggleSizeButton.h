@interface HUTileCellToggleSizeButton : UIButton {
    void /* unknown type, empty encoding */ arrowImageView;
}

@property (nonatomic) void /* unknown type, empty encoding */ isExpanding;
@property (nonatomic, retain) void /* unknown type, empty encoding */ symbolConfiguration;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;

@end
