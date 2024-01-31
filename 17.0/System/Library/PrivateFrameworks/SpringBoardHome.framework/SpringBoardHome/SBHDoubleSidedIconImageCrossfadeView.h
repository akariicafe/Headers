@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    double _scaleX;
    double _scaleY;
    double _cornerRadius;
}

+ (Class)_containerViewClass;
+ (Class)layerClass;

- (void)_applyCornerRadiusToBackgroundView;
- (void)_setCornerRadiusEnabled:(BOOL)a0;
- (void)_applyCornerRadiusToViews;
- (void)cleanup;
- (void)_applyCornerRadiusToIconImageView;
- (void)_applyCornerRadius:(double)a0;
- (void)_applyCrossfadeScaleX:(double)a0 scaleY:(double)a1;
- (void)prepareGeometry;
- (void)_applyCornerRadiusToCrossfadeView;
- (void)layoutSubviews;

@end
