@class CAPackage, CAStateController, NSString, CALayer, MRUCAPackageAsset;

@interface MRUCAPackageView : UIView

@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CALayer *packageLayer;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } permanentTransform;
@property (readonly, nonatomic) NSString *packageName;
@property (retain, nonatomic) MRUCAPackageAsset *asset;
@property (retain, nonatomic) NSString *glyphState;
@property (nonatomic) double scale;

- (void)clear;
- (void)mt_applyVisualStyling:(id)a0;
- (void)mru_applyVisualStylingWithColor:(id)a0 alpha:(double)a1 blendMode:(long long)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateFilter;

@end
