@class CALayer;

@interface NTKRoundedCornerMaskView : UIView {
    CALayer *_maskLayer;
}

+ (id)_maskForDevice:(id)a0;
+ (id)_maskWithSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 cornerRadius:(double)a2;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mask:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1 cornerRadius:(double)a2;

@end
