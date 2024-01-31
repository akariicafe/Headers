@interface PosterBoard.HomeScreenConfigurationView : UIView <PosterBoard.PosterPairObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ posterPair;
    void /* unknown type, empty encoding */ controls;
    void /* unknown type, empty encoding */ lockPosterPreviewView;
    void /* unknown type, empty encoding */ gradientPreviewView;
    void /* unknown type, empty encoding */ solidColorPreviewView;
    void /* unknown type, empty encoding */ homePosterPreviewView;
    void /* unknown type, empty encoding */ blurButton;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ homeScreenConfiguration;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didSelectControl:(id)a0;
- (void)posterPairDidUpdateConfiguredProperties:(id)a0;
- (void)posterPairDidUpdateHomePosterAppearance:(id)a0;
- (void)posterPairDidUpdateLockPosterAppearance:(id)a0;
- (void)posterPairDidUpdateLockPosterSnapshots:(id)a0;
- (void)reloadLockPosterSnapshot;
- (void)toggleLegibilityBlur:(id)a0;

@end
