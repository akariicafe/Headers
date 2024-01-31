@class NSURL;

@interface PBUIWallpaperEffectImageRequestActionImageURLResponse : PBUIWallpaperEffectImageRequestActionResponse

@property (readonly, copy, nonatomic) NSURL *imageURL;

- (id)initWithActualStyle:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 imageURL:(id)a2;

@end
