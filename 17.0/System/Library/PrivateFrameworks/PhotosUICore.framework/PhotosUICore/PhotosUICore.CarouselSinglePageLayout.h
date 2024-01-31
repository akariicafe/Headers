@interface PhotosUICore.CarouselSinglePageLayout : PXGLayout {
    void /* unknown type, empty encoding */ clippingInsets;
    void /* unknown type, empty encoding */ edgeClippingMaskEffects;
    void /* unknown type, empty encoding */ mainMaskingEffects;
    void /* unknown type, empty encoding */ updater;
}

- (id)init;
- (void)updateIfNeeded;
- (void)entityManagerDidChange;
- (void)updateContent;
- (void)displayScaleDidChange;
- (void).cxx_destruct;
- (void)updateMaskingEffects;

@end
