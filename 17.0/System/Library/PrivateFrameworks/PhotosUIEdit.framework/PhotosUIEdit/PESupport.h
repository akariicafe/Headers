@interface PESupport : NSObject

+ (void)assetHasDepthEnabled:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)assetHasUnsupportedOriginalAdjustments:(id)a0;
+ (BOOL)canPerformEditOnAsset:(id)a0;
+ (BOOL)photoWasTakenWithoutFlashWithImageProperties:(id)a0;
+ (id)repairedAsShotCompositionController:(id)a0 forCurrentCompositionController:(id)a1;
+ (void)syncMainThread:(id /* block */)a0;
+ (id)originalAdjustmentVersionForAsset:(id)a0;

@end
