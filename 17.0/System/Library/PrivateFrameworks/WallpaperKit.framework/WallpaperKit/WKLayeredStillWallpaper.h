@class WKLayeredStillWallpaperInput;

@interface WKLayeredStillWallpaper : WKLayeredThumbnailWallpaper

@property (retain, nonatomic) WKLayeredStillWallpaperInput *_wallpaperValue;

+ (id)na_identity;

- (id)propertyListRepresentation;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)wallpaperValue;
- (BOOL)supportsSerialization;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundThumbnailImageURL:(id)a2 foregroundThumbnailImageURL:(id)a3 floatingThumbnailImageURL:(id)a4 backgroundFullSizeImageURL:(id)a5 foregroundFullSizeImageURL:(id)a6 floatingFullSizeImageURL:(id)a7;

@end
