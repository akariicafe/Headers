@class NSString;

@interface VIBarcodeAnnotationItem : NSObject

@property (readonly, copy, nonatomic) NSString *symbology;
@property (readonly, copy, nonatomic) NSString *payloadStringValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (readonly, nonatomic) float confidence;

+ (id)annotationItemFromObservation:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSymbology:(id)a0 payloadStringValue:(id)a1 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 confidence:(float)a3;

@end
