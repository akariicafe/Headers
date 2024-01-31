@class UIImage, UIView;

@interface _UIFloatingShadowView : UIView {
    UIView *_shadowView;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _shadowTransform;
}

@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property (nonatomic) struct CGSize { double width; double height; } shadowSize;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) double shadowExpansion;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shadowContentsCenter;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL _disableOutsetShadowPath;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutShadow;
- (void)_setShadowImageIfNeeded;
- (struct CGPath { } *)_shadowPathForSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1;
- (void)_updateShadowLayer;

@end
