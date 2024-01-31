@class NSURL, UIImage;

@interface WKThumbnailWallpaper : WKAbstractWallpaper

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (retain, nonatomic) UIImage *_thumbnailImage;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (BOOL)supportsCopying;
- (id)thumbnailImage;
- (id)propertyListRepresentation;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsSerialization;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(unsigned long long)a2 representedType:(unsigned long long)a3 backingType:(unsigned long long)a4 thumbnailImageURL:(id)a5;

@end
