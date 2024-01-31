@class CIColor, NSString;

@interface PIDebugRect : NSObject

@property (class, readonly, nonatomic) CIColor *visibleColor;
@property (class, readonly, nonatomic) CIColor *inactiveColor;
@property (class, readonly, nonatomic) CIColor *paddedColor;
@property (class, readonly, nonatomic) CIColor *faceColor;
@property (class, readonly, nonatomic) CIColor *inflatedFaceColor;
@property (class, readonly, nonatomic) CIColor *datetimeColor;
@property (class, readonly, nonatomic) CIColor *datetimeSubcolor;
@property (class, readonly, nonatomic) CIColor *saliencyPreferredColor;
@property (class, readonly, nonatomic) CIColor *saliencyAcceptableColor;
@property (class, readonly, nonatomic) CIColor *gazeAreaRectColor;
@property (class, readonly, nonatomic) CIColor *smartCropColor;
@property (class, readonly, nonatomic) CIColor *v2CropColor;
@property (class, readonly, nonatomic) CIColor *faceUnionColor;
@property (class, readonly, nonatomic) CIColor *labelColor;
@property (class, readonly, nonatomic) CIColor *metadataColor;
@property (class, readonly, nonatomic) CIColor *settlingEffectColor;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } geometry;
@property (readonly, nonatomic) CIColor *color;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)debugRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 label:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 label:(id)a2;

@end
