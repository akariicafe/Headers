@class NSURL;

@interface PBUIWallpaperImage : UIImage

@property (readonly, copy, nonatomic) NSURL *wallpaperFileURL;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlatColor:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2 wallpaperFileURL:(id)a3;
- (id)initWithFlatColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
