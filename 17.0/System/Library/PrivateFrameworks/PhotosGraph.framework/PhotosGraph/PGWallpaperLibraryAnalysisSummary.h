@interface PGWallpaperLibraryAnalysisSummary : NSObject

@property (readonly, nonatomic) double ratioOfAssetsAtOrAboveSceneAnalysisVersion;
@property (readonly, nonatomic) double ratioOfAssetsAtOrAboveFaceAnalysisVersion;
@property (readonly, nonatomic) BOOL libraryIsProcessedEnough;

- (id)initWithPhotoLibrary:(id)a0;

@end
