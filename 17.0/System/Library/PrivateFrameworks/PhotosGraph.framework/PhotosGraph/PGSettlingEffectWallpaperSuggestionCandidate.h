@class PHAsset, PNWallpaperCropResult, PHSuggestion;

@interface PGSettlingEffectWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset;
@property (readonly) PHSuggestion *suggestion;
@property (readonly) PNWallpaperCropResult *cropResult;

+ (id)sortDescriptorsForProcessing;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 suggestion:(id)a1;

@end
