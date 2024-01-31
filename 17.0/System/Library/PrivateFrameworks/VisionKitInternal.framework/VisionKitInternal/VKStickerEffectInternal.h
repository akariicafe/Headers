@protocol VKStickerEffectInternal;

@interface VKStickerEffectInternal : NSObject

@property (class, readonly, nonatomic) id<VKStickerEffectInternal> makeNewEffect;
@property (class, readonly, nonatomic) id<VKStickerEffectInternal> noneEffect;
@property (class, readonly, nonatomic) id<VKStickerEffectInternal> strokeEffect;
@property (class, readonly, nonatomic) id<VKStickerEffectInternal> comicEffect;
@property (class, readonly, nonatomic) id<VKStickerEffectInternal> puffyEffect;
@property (class, readonly, nonatomic) id<VKStickerEffectInternal> iridescentEffect;

@end
