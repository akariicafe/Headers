@class WKWallpaperAdjustmentTraitOffset;

@interface WKWallpaperAdjustmentTraits : NSObject <NSCopying>

@property (readonly, nonatomic) WKWallpaperAdjustmentTraitOffset *offset;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)wk_descriptionBuilder;
- (id)propertyListRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
