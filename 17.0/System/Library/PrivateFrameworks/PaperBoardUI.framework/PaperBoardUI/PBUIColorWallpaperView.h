@class UIImage, UIColor;

@interface PBUIColorWallpaperView : PBUIWallpaperView

@property (retain, nonatomic) UIImage *cachedSnapshotImage;
@property (readonly, nonatomic) UIColor *wallpaperColor;

- (id)_computeAverageColor;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSmudgeRadius:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (id)snapshotImage;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (long long)wallpaperType;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (void).cxx_destruct;

@end
