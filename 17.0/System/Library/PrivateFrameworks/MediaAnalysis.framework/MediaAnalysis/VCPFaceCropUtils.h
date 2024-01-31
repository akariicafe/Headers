@interface VCPFaceCropUtils : NSObject

+ (id)imageCreationOptions;
+ (id)newFaceCropFromImageData:(id)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupingIdentifier:(id)a2 error:(id *)a3;
+ (struct CGImageMetadata { } *)createOutputMetadataFromDictionary:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropBoundsInOriginalImageFromFaceCrop:(id)a0 error:(id *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundsFromFaceCrop:(id)a0 error:(id *)a1;
+ (struct CGSize { double x0; double x1; })faceCropDimensionsFromFaceCrop:(id)a0 error:(id *)a1;
+ (id)groupingIdentifierFromFaceCrop:(id)a0 error:(id *)a1;
+ (BOOL)isValidFaceCrop:(id)a0;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)a0;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andGroupingIdentifier:(id)a2;
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource { } *)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupingIdentifier:(id)a2 error:(id *)a3;
+ (id)newFaceCropFromImageURL:(id)a0 withNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupingIdentifier:(id)a2 error:(id *)a3;

@end
