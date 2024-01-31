@class PBUIWallpaperOptions, NSData, UIImage, NSURL, NSString, NSDictionary, PBUIWallpaperGradient, PBUIWallpaperImage, UIColor;

@interface PBUIWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long variant;
@property (nonatomic) BOOL needsWallpaperDimmingTreatment;
@property (nonatomic) BOOL needsInactiveAppearanceTreatment;
@property (retain, nonatomic) PBUIWallpaperImage *wallpaperImage;
@property (retain, nonatomic) UIImage *wallpaperOriginalImage;
@property (retain, nonatomic) UIImage *wallpaperThumbnailImage;
@property (copy, nonatomic) NSData *wallpaperThumbnailImageData;
@property (copy, nonatomic) NSData *wallpaperImageHashData;
@property (copy, nonatomic) NSDictionary *proceduralWallpaperInfo;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSURL *originalVideoURL;
@property (copy, nonatomic) PBUIWallpaperOptions *wallpaperOptions;
@property (copy, nonatomic) UIColor *wallpaperColor;
@property (copy, nonatomic) NSString *wallpaperColorName;
@property (copy, nonatomic) PBUIWallpaperGradient *wallpaperGradient;
@property (readonly, nonatomic) long long wallpaperType;
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
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
- (id)initWithVariant:(long long)a0 type:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
