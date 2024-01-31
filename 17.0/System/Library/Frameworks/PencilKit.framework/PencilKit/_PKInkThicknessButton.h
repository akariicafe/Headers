@class UIColor, NSString, UIImageView, UIImage;

@interface _PKInkThicknessButton : UIButton <UIPointerInteractionDelegate> {
    double _weight;
    UIColor *_imageTintColorOverride;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    struct CGSize { double width; double height; } _buttonSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRenderedBounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didTouchUpInside;

@end
