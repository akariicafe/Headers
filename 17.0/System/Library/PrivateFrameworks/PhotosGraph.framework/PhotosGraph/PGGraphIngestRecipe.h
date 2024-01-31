@class NSArray, PHPhotoLibrary;

@interface PGGraphIngestRecipe : NSObject {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) NSArray *momentsToIngest;
@property (readonly, nonatomic) NSArray *highlightsToIngest;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)postprocessorsWithGraphBuilder:(id)a0;
- (id)_highlightsForLibraryAnalysis;
- (id)_momentsForLibraryAnalysis;
- (id)defaultPostprocessorsWithGraphBuilder:(id)a0;
- (id)defaultPreprocessorsWithGraphBuilder:(id)a0;
- (id)preprocessorsWithGraphBuilder:(id)a0;

@end
