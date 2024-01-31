@class NSURL;

@interface WKLayeredStillWallpaperInput : WKLayeredThumbnailWallpaperInput

@property (readonly, copy, nonatomic) NSURL *backgroundFullSizeImageURL;
@property (readonly, copy, nonatomic) NSURL *foregroundFullSizeImageURL;
@property (readonly, copy, nonatomic) NSURL *floatingFullSizeImageURL;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)wk_descriptionBuilder;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBackgroundThumbnailImageURL:(id)a0 foregroundThumbnailImageURL:(id)a1 floatingThumbnailImageURL:(id)a2 backgroundFullSizeImageURL:(id)a3 foregroundFullSizeImageURL:(id)a4 floatingFullSizeImageURL:(id)a5;

@end
