@interface PNCropUtilitiesWrapper : NSObject

+ (id)cropVariantsFromSignalsWithCropTypes:(id)a0 aspectRatio:(double)a1 sourcePixelWidth:(int)a2 sourcePixelHeight:(int)a3 acceptableCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 preferredCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 faceAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 objectSaliencyRects:(id)a7 gazeAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 isDenormalized:(BOOL)a9;
+ (id)cropVariantsForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 faces:(id)a2;
+ (id)cropVariantsFromSignalsPrefersFaceCrops:(BOOL)a0 aspectRatio:(double)a1 sourcePixelWidth:(int)a2 sourcePixelHeight:(int)a3 acceptableCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 preferredCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 faceAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 objectSaliencyRects:(id)a7 gazeAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 isDenormalized:(BOOL)a9;
+ (id)stringForCropVariantType:(long long)a0;
+ (id)cropVariantsForAsset:(id)a0 faces:(id)a1;

@end
