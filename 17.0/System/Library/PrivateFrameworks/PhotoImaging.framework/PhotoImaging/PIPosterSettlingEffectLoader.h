@interface PIPosterSettlingEffectLoader : NSObject

+ (void)cancelRequest:(int)a0;
+ (id)temporaryDirectory;
+ (unsigned long long)_gatingFlagsFromMADStatus:(id)a0;
+ (id)_resolveOptions:(id)a0;
+ (BOOL)adjustCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forEditedLivePhotoResource:(id)a1 error:(out id *)a2;
+ (BOOL)adjustCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 outputExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forComposition:(id)a3 applyOrientation:(BOOL)a4 error:(out id *)a5;
+ (void)adjustVideo:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forResource:(id)a2 completion:(id /* block */)a3;
+ (id)adjustedCompositionForResource:(id)a0 videoURL:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(out id *)a3;
+ (BOOL)canHandleEditedLivePhotoResource:(id)a0 error:(out id *)a1;
+ (BOOL)extractCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 fromStabilizationResultAttributes:(id)a1 error:(out id *)a2;
+ (int)loadCropRectWithResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (int)loadVideoWithResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (id)originalCompositionForResource:(id)a0 error:(out id *)a1;
+ (id)temporaryAdjustedVideoURLForURL:(id)a0;

@end
