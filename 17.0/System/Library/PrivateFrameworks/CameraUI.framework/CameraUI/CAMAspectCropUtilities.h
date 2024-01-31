@interface CAMAspectCropUtilities : NSObject

+ (struct CGSize { double x0; double x1; })finalExpectedSizeWithPhotoMetadata:(id)a0 aspectRatio:(long long)a1;
+ (id)cropFilterForAspectRatio:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })finalExpectedSizeWithCaptureDimensions:(struct { int x0; int x1; })a0 orientation:(int)a1 aspectRatio:(long long)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForAspectRatio:(long long)a0 inImageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
