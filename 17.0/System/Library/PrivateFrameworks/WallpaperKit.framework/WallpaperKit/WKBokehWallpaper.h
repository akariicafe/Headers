@class NSString, UIImage, NSURL, WKBokehWallpaperInput;

@interface WKBokehWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (retain, nonatomic) WKBokehWallpaperInput *_wallpaperValue;
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
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundColors:(id)a2 bubbleColors:(id)a3 bubbleCount:(unsigned long long)a4 bubbleScale:(double)a5 parallaxMultiplier:(double)a6 thumbnailSeed:(unsigned long long)a7;
- (id)wallpaperValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
