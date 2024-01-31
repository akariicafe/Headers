@class NSArray;

@interface WKBokehWallpaperInput : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (readonly, copy, nonatomic) NSArray *bubbleColors;
@property (readonly, nonatomic) unsigned long long bubbleCount;
@property (readonly, nonatomic) double bubbleScale;
@property (readonly, nonatomic) double parallaxMultiplier;
@property (readonly, nonatomic) unsigned long long thumbnailSeed;

+ (id)new;
+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (id)init;
- (unsigned long long)hash;
- (id)wk_descriptionBuilder;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBackgroundColors:(id)a0 bubbleColors:(id)a1 bubbleCount:(unsigned long long)a2 bubbleScale:(double)a3 parallaxMultiplier:(double)a4 thumbnailSeed:(unsigned long long)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
