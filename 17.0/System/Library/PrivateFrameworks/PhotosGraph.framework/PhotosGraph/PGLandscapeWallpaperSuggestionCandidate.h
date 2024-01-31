@class PHAsset, PNWallpaperCropResult;

@interface PGLandscapeWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
