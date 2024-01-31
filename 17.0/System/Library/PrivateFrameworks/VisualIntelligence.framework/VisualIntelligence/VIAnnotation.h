@class NSArray, VITextBlockAnnotation, VIScenenetAnnotation, VIBarcodeAnnotation;

@interface VIAnnotation : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *nsfwAnnotations;
@property (readonly, nonatomic) NSArray *faceAnnotations;
@property (readonly, nonatomic) NSArray *humanAnnotations;
@property (readonly, nonatomic) VITextBlockAnnotation *textBlockAnnotation;
@property (readonly, nonatomic) VIScenenetAnnotation *scenenetAnnotation;
@property (readonly, nonatomic) VIBarcodeAnnotation *barcodeAnnotation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFaceAnnotations:(id)a0 humanAnnotations:(id)a1 nsfwAnnotations:(id)a2 textBlockAnnotation:(id)a3 scenenetAnnotation:(id)a4 barcodeAnnotation:(id)a5;
- (id)initWithAnnotations:(id)a0 humanAnnotations:(id)a1 nsfwAnnotations:(id)a2 textBlockAnnotation:(id)a3;
- (id)initWithTextAnnotations:(id)a0;

@end
