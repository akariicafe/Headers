@interface PKImageCompare : NSObject

+ (id)stringFromSize:(struct CGSize { double x0; double x1; })a0;
+ (struct { int x0[4]; int x1[4]; double x2[4]; double x3[4]; struct CGImage *x4; BOOL x5; })compareImage:(struct CGImage { } *)a0 toMasterImage:(struct CGImage { } *)a1 filename:(id)a2 differenceImageOutputPath:(id)a3 diffWhite:(BOOL)a4 stdDevThreshhold:(double)a5;
+ (id)filterImage:(struct CGImage { } *)a0;
+ (BOOL)saveImage:(struct CGImage { } *)a0 toPath:(id)a1;

@end
