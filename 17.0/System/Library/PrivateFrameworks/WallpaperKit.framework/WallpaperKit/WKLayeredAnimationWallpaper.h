@class NSString, NSURL, WKLayeredAnimationWallpaperInput, UIImage;

@interface WKLayeredAnimationWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) WKLayeredAnimationWallpaperInput *_wallpaperValue;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long representedType;
@property (readonly, nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)propertyListRepresentation;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundAnimationFileURL:(id)a2 foregroundAnimationFileURL:(id)a3 floatingAnimationFileURL:(id)a4;
- (void).cxx_destruct;
- (id)wallpaperValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
