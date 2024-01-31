@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition {
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage *_image[9];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutRects[9];
    struct CGSize { double width; double height; } _intrinsicSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    struct { double top; double left; double bottom; double right; } _contentInsets;
    CUIPSDGradient *_gradient;
}

@property (readonly, nonatomic) unsigned long long numberOfSlices;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *sliceRects;
@property (readonly, nonatomic) CUIPSDGradient *gradient;

- (unsigned short)layer;
- (unsigned short)direction;
- (unsigned short)appearance;
- (void)dealloc;
- (unsigned short)presentationState;
- (unsigned short)keyScale;
- (unsigned short)state;
- (unsigned short)size;
- (struct { double x0; double x1; double x2; double x3; })contentInsets;
- (double)scale;
- (unsigned short)previousValue;
- (unsigned short)identifier;
- (unsigned short)dimension1;
- (id)description;
- (unsigned short)previousState;
- (unsigned short)value;
- (id)stringForState:(unsigned short)a0;
- (unsigned short)localization;
- (id)slices;
- (unsigned short)drawingLayer;
- (id)stringForValue:(unsigned short)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectangle;
- (long long)columnSlices;
- (id)coreUIOptions;
- (id)defaultTemplateName;
- (id)dimension1LocalizedString;
- (unsigned short)dimension2;
- (id)dimension2LocalizedString;
- (id)directionLocalizedString;
- (id)drawingLayerLocalizedString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })edgeInsets:(BOOL)a0;
- (id)initWithCoreUIOptions:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)presentationStateLocalizedString;
- (id)previousStateLocalizedString;
- (id)previousValueLocalizedString;
- (id)referenceImage;
- (struct CGPoint { double x0; double x1; })renditionCoordinatesForPartFeatures:(long long)a0;
- (long long)rowSlices;
- (id)scaleLocalizedString;
- (id)sizeLocalizedString;
- (id)stateLocalizedString;
- (id)typeLocalizedString;
- (id)valueLocalizedString;

@end
