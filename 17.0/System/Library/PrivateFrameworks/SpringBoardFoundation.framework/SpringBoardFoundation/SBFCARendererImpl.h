@interface SBFCARendererImpl : NSObject

+ (id)_actuallyRenderImage:(struct CGImage { } *)a0 requiresBGRA:(BOOL)a1 downsampleFactor:(double)a2 layerCustomizer:(id /* block */)a3;
+ (id)luminanceTreatmentFilters;
+ (id)renderMaterialImage:(struct CGImage { } *)a0 recipeName:(id)a1 containingBundle:(id)a2 weighting:(double)a3 downsampleFactor:(double)a4;
+ (id)renderMaterialImage:(struct CGImage { } *)a0 recipeName:(id)a1 containingBundle:(id)a2 weighting:(double)a3 downsampleFactor:(double)a4 scaleAdjustment:(id /* block */)a5;
+ (id)renderTreatedWallpaperImage:(struct CGImage { } *)a0 needsLuminanceTreatment:(BOOL)a1 needsDimmingTreatment:(BOOL)a2 downsampleFactor:(double)a3 averageColor:(id)a4;

@end
