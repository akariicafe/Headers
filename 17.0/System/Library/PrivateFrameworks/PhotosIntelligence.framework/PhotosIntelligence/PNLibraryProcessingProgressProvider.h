@interface PNLibraryProcessingProgressProvider : NSObject

+ (struct { long long x0; long long x1; long long x2; double x3; double x4; })faceProcessingProgressForLibrary:(id)a0;
+ (void)requestHighlightEnrichmentProgressForLibrary:(id)a0 result:(id /* block */)a1;
+ (void)requestProcessingProgressForLibrary:(id)a0 result:(id /* block */)a1;
+ (void)requestSyndicationProgressForLibrary:(id)a0 result:(id /* block */)a1;

@end
