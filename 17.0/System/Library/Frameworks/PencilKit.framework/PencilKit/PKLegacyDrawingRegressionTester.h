@interface PKLegacyDrawingRegressionTester : NSObject

+ (double)compareLegacyDrawingImage:(id)a0 toConvertedDrawing:(id)a1;
+ (double)compareImage:(struct CGImage { } *)a0 with:(struct CGImage { } *)a1 drawing:(id)a2;
+ (double)compareLegacyDrawingImage:(id)a0 toConvertedDrawing:(id)a1 debugImagesDirectory:(id)a2;
+ (struct CGImage { } *)createFilteredImageFromImage:(id)a0 context:(id)a1 filterRadius:(double)a2;
+ (double)maxStdDevErrorFromResult:(struct { int x0[4]; int x1[4]; double x2[4]; double x3[4]; struct CGImage *x4; BOOL x5; })a0;
+ (id)regressionTestDrawingPathForFile:(id)a0 forClass:(Class)a1;
+ (id)regressionTestImagePathForFile:(id)a0 forClass:(Class)a1;

@end
