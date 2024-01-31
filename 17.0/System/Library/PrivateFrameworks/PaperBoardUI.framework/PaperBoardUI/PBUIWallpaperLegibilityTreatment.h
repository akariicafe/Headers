@class UIColor, NSString, CAGradientLayer, CABackdropLayer, CALayer;

@interface PBUIWallpaperLegibilityTreatment : NSObject <CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding> {
    CALayer *_dimmingLayer;
    CALayer *_dimmedColorLayer;
    CABackdropLayer *_luminanceBackdropLayer;
    CAGradientLayer *_gradientLayer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL needsLuminanceTreatment;
@property (nonatomic) BOOL needsDimmingTreatment;
@property (retain, nonatomic) UIColor *averageColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)luminanceTreatmentFilters;
- (id)colorByDimmingColor:(id)a0;
- (BOOL)commitToRenderingTree:(id)a0 options:(id)a1 error:(out id *)a2;
- (id)makeDimmingLayer;
- (id)makeGradientLayer;
- (id)makeLuminanceBackdropLayer;

@end
