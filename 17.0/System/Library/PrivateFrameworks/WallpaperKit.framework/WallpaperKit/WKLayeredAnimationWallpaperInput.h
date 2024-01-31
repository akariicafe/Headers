@class NSURL;

@interface WKLayeredAnimationWallpaperInput : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *backgroundAnimationFileURL;
@property (readonly, copy, nonatomic) NSURL *foregroundAnimationFileURL;
@property (readonly, copy, nonatomic) NSURL *floatingAnimationFileURL;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)wk_descriptionBuilder;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBackgroundAnimationFileURL:(id)a0 foregroundAnimationFileURL:(id)a1 floatingAnimationFileURL:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
