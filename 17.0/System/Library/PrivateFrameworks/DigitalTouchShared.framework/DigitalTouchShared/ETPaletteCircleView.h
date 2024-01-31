@class UIView;

@interface ETPaletteCircleView : UIView {
    UIView *_selectionMarker;
}

@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) UIView *selectionMarker;

+ (double)paletteCircleDiameter;
+ (id)selectionMarkerColor;
+ (double)selectionMarkerDiameter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSelectionMarkerFrame;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
