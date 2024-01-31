@class PHFace, PHAsset, PNWallpaperCropResult;

@interface PGPetWallpaperSuggestionCandidate : NSObject

@property (readonly) PHFace *face;
@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 inAsset:(id)a1;

@end
