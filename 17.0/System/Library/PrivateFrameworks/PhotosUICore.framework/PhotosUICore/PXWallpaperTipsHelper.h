@interface PXWallpaperTipsHelper : PXTipsHelper

+ (void)presentFailedSettlingEffectTip:(id)a0;
+ (void)dismissTip:(id /* block */)a0;
+ (void)presentTrySettlingEffectTip:(id)a0;
+ (void)removeAllPresentationDelegates;
+ (void)startObservingTips;

@end
