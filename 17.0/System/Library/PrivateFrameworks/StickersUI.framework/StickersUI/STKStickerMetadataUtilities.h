@interface STKStickerMetadataUtilities : NSObject

+ (unsigned long long)stickerEffectTypeFromImageData:(id)a0;
+ (long long)effectTypeForStickerEffectView:(id)a0;
+ (void)clearCachedPreviewsForStickerView:(id)a0;
+ (id)encodeCGImage:(struct CGImage { } *)a0 withStickerEffectType:(unsigned long long)a1;
+ (id)encodeCGImageSource:(struct CGImageSource { } *)a0 withStickerEffectType:(unsigned long long)a1;
+ (id)encodeImage:(id)a0 withStickerEffectType:(unsigned long long)a1;
+ (id)encodeImageData:(id)a0 withStickerEffectType:(unsigned long long)a1;
+ (void)playSettlingAnimation:(id)a0;
+ (void)setBoundsIncludeStroke:(BOOL)a0 effectView:(id)a1;
+ (void)stickerEffect:(id)a0 applyWithWideStrokeToImage:(id)a1 completion:(id /* block */)a2;
+ (unsigned long long)stickerEffectTypeFromString:(id)a0;
+ (id)stringFromStickerEffectType:(unsigned long long)a0;

@end
