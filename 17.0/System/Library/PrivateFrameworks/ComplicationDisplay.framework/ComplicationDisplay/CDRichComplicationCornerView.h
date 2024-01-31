@class NSString, UIBezierPath;

@interface CDRichComplicationCornerView : CDRichComplicationTemplateView <CDRichComplicationCornerPositionable> {
    long long _fontFallback;
    UIBezierPath *_hitTestPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hitTestBounds;
}

@property (nonatomic) double innerComponentRotationInDegree;
@property (nonatomic) double outerComponentRotationInDegree;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeForDevice:(id)a0;

- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (void)_createHitTestPathIfNecessary;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (id)initWithFontFallback:(long long)a0;
- (void)_layoutCurvedLabel:(id)a0 centerAngleInDegree:(double)a1 editingRotationInDegree:(double)a2;
- (id)_createAndAddColoringLabelWithFontSize:(double)a0;
- (id)_fontWithSize:(double)a0 fontWeight:(double)a1;
- (id)_fontWithSize:(double)a0 withFontDescriptor:(id)a1;
- (void)_layoutView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 editingTranslation:(struct CGPoint { double x0; double x1; })a2 editingRotationInDegree:(double)a3;
- (void)_updateColoringLabel:(id)a0 withFontWeight:(double)a1;

@end
