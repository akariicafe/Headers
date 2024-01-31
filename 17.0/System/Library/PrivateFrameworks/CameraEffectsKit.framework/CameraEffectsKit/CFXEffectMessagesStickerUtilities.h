@interface CFXEffectMessagesStickerUtilities : NSObject

+ (struct CGSize { double x0; double x1; })JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(long long)a0;
+ (id)animatedPreviewFileNameForOverlayID:(id)a0;
+ (id)animatedPreviewsDirectory;
+ (void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)a0 atStickerSize:(long long)a1 previewDuration:(double)a2 previewFrameRate:(unsigned long long)a3 previewCompletedBlock:(id /* block */)a4;
+ (long long)numberOfStickersForEffectTypeId:(id)a0;
+ (id)overlayIDFromAnimatedPreviewFileName:(id)a0;
+ (id)stickerPropertiesForIndex:(long long)a0 forEffectTypeId:(id)a1;

@end
