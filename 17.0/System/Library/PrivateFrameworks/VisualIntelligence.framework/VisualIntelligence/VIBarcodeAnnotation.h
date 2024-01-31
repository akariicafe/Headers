@class NSArray;

@interface VIBarcodeAnnotation : NSObject

@property (readonly, copy, nonatomic) NSArray *annotationItems;

+ (id)annotationFromObservations:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnnotationItems:(id)a0;

@end
