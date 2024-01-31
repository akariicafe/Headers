@class NSString, PBUIPosterWallpaperViewController;

@interface PBUIPosterActiveVariantImageProvider : NSObject <PBUIFakeBlurImageProviding>

@property (readonly, nonatomic) PBUIPosterWallpaperViewController *rootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForWallpaperStyle:(inout long long *)a0 variant:(long long)a1 traitCollection:(id)a2;
- (BOOL)updateImageProviderView:(id)a0 withImage:(id)a1;
- (double)zoomFactorForVariant:(long long)a0;
- (void).cxx_destruct;
- (BOOL)parallaxEnabledForVariant:(long long)a0;
- (double)parallaxFactorForVariant:(long long)a0;
- (id)newImageProviderView;
- (id)initWithRootObject:(id)a0;

@end
