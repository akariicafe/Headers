@class NADescriptionBuilder, NSString, NAIdentity, NSURL;

@interface WKLayeredThumbnailWallpaperInput : NSObject <WKDescribable, NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSURL *backgroundThumbnailImageURL;
@property (readonly, copy, nonatomic) NSURL *foregroundThumbnailImageURL;
@property (readonly, copy, nonatomic) NSURL *floatingThumbnailImageURL;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBackgroundThumbnailImageURL:(id)a0 foregroundThumbnailImageURL:(id)a1 floatingThumbnailImageURL:(id)a2;

@end
