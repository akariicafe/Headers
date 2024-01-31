@class NSString, SBUILegibilityCache, NSOperationQueue;

@interface SBUILegibilityDefaultEngine : NSObject <SBUILegibilityEngine> {
    SBUILegibilityCache *_legibilityCache;
    NSString *_engineIdentifier;
    NSOperationQueue *_asyncOperationQueue;
}

@property (nonatomic) BOOL useMinFillHeightForTemplateGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultEngine;

- (id)applyStrength:(double)a0 toImage:(id)a1 settings:(id)a2;
- (id)initWithEngineIdentifier:(id)a0;
- (void)prewarmForSettings:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 minSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (void).cxx_destruct;
- (void)executeLegibilityUpdateForContainer:(id)a0 forImage:(id)a1 settings:(id)a2 strength:(double *)a3 engineResult:(struct { BOOL x0; } *)a4;
- (struct CGSize { double x0; double x1; })calculateShadowImageViewSizeForOriginalImage:(id)a0 shadowImage:(id)a1 settings:(id)a2;
- (id)executeAsyncLegibilityUpdateForContainer:(id)a0 image:(id)a1 settings:(id)a2 strength:(double *)a3 completion:(id /* block */)a4;
- (void)_teardownCaches:(id)a0;

@end
