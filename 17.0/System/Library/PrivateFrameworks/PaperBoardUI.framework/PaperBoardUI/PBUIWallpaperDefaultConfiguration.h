@class UIColor, NSString, NSDictionary, NSURL, PBUIWallpaperGradient;

@interface PBUIWallpaperDefaultConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long wallpaperType;
@property (readonly, copy, nonatomic) NSURL *staticImageURL;
@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property (readonly, copy, nonatomic) UIColor *wallpaperColor;
@property (readonly, copy, nonatomic) NSString *wallpaperColorName;
@property (readonly, copy, nonatomic) PBUIWallpaperGradient *wallpaperGradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initColorWithColor:(id)a0;
- (id)initColorWithColorName:(id)a0;
- (id)initGradientWithGradient:(id)a0;
- (id)initProceduralWithIdentifier:(id)a0 options:(id)a1;
- (id)initStaticWithImageURL:(id)a0;
- (id)initVideoWithStaticImageURL:(id)a0 videoURL:(id)a1;

@end
