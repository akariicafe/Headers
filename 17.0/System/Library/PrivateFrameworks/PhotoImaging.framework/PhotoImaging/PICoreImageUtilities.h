@interface PICoreImageUtilities : NSObject

+ (id)framedRectImageWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 borderWidth:(double)a2;
+ (id)loadFilterWithName:(id)a0;
+ (id)metalKernelWithFunctionName:(id)a0 error:(id *)a1;
+ (id)metalLibraryData;

@end
