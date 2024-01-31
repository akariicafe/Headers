@interface PLThumbnailUtilities : NSObject

+ (int)_bytesPerRowForSpecification:(id)a0;
+ (id)_destinationDataArrayFromSpecifications:(id)a0;
+ (id)_destinationDataFromSpecification:(id)a0;
+ (BOOL)_performSWDownscaleTo5551OnSourceImage:(struct CGImage { } *)a0 withSourceDimensions:(struct { int x0; int x1; })a1 withSpecification:(id)a2 destinationData:(id)a3 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 bytesPerRow:(int *)a5;
+ (int)_requiredDataLengthForSpecification:(id)a0;
+ (BOOL)_validateSpecification:(id)a0 destinationData:(id *)a1;
+ (BOOL)_validateSpecifications:(id)a0 destinationData:(id *)a1;
+ (BOOL)performHWCascadingDownscaleTo5551OnIOSurface:(struct __IOSurface { } *)a0 withSpecifications:(id)a1 destinationData:(id *)a2 usingContext:(id)a3;
+ (BOOL)performSWCascadingDownscaleTo5551OnImage:(struct CGImage { } *)a0 withSpecifications:(id)a1 destinationData:(id *)a2;
+ (BOOL)performSWDownscaleTo5551OnImage:(struct CGImage { } *)a0 withSpecification:(id)a1 destinationData:(id *)a2 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 bytesPerRow:(int *)a4;

@end
