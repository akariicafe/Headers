@class NSMutableDictionary;

@interface EDColorAnalyzer : NSObject {
    NSMutableDictionary *_cache;
}

- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (id)kmeansColorsForColors:(id)a0 clusters:(long long)a1;
- (id)colorAtCenterOfSurface:(struct __IOSurface { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)colorsInSurface:(struct __IOSurface { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1 clipToCircle:(BOOL)a2 clipedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)colorsSuggestionsForSurface:(struct __IOSurface { } *)a0 maxSuggestions:(long long)a1 clipToCircle:(BOOL)a2 clipedToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)getRandomColors:(long long)a0 from:(id)a1;
- (id)kmeansForColors:(id)a0 clusters:(long long)a1;
- (BOOL)kmeansShouldStopWithPreviousColors:(id)a0 newColors:(id)a1 iterations:(long long)a2;
- (id)removeSimilarColors:(id)a0 minDistance:(double)a1;

@end
