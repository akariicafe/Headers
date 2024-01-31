@interface PXWallpaperTipsHelper_Swift : PXTipsHelper_Swift {
    void /* unknown type, empty encoding */ trySettlingEffectTip;
    void /* unknown type, empty encoding */ failedSettlingEffectTip;
    void /* unknown type, empty encoding */ hasStartedTips;
}

@property (class, nonatomic, readonly) PXWallpaperTipsHelper_Swift *shared;

+ (void)presentFailedSettlingEffectTip:(id)a0;
+ (void)dismissTip:(id /* block */)a0;
+ (void)presentTrySettlingEffectTip:(id)a0;
+ (void)removeAllPresentationDelegates;
+ (void)startObservingTips;

- (id)init;
- (void).cxx_destruct;

@end
