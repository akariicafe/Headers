@interface PosterBoard.HomeScreenPosterCollectionViewCell : PosterBoard.PosterPairCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ homeScreenIconContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lockPosterPreviewView;
    void /* unknown type, empty encoding */ lockPosterBlurView;
    void /* unknown type, empty encoding */ gradientPreviewView;
    void /* unknown type, empty encoding */ solidColorPreviewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_homePosterPreviewView;
    void /* unknown type, empty encoding */ homePosterSnapshotView;
    void /* unknown type, empty encoding */ homePosterBlurView;
    void /* unknown type, empty encoding */ homeScreenConfiguration;
}

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)posterPairDidUpdateHomePosterAppearance:(id)a0;

@end
