@interface PXPhotoLibraryProcessingProgressReport : NSObject

+ (id)_processingProgressDescription:(struct { long long x0; long long x1; long long x2; long long x3; double x4; double x5; double x6; })a0;
+ (id)colorForDefault;
+ (id)colorForPartial;
+ (id)_highlightEnrichmentProgressDescription:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; double x6; double x7; })a0;
+ (id)_syndicationProgressDescription:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })a0;
+ (id)colorForComplete;
+ (id)colorForNotEnriched;
+ (id)colorForSceneComplete;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; double x6; double x7; })a0;
+ (void)requestBriefDescriptionForLibrary:(id)a0 resultBlock:(id /* block */)a1;
+ (void)requestFullDescriptionForLibrary:(id)a0 resultBlock:(id /* block */)a1;
+ (id)syndicationProgressImageWithProgressReport:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })a0;

@end
