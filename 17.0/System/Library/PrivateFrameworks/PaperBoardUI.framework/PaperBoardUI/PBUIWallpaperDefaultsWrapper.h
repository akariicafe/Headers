@class NSString, NSData, NSDictionary;

@interface PBUIWallpaperDefaultsWrapper : NSObject

@property (nonatomic) double parallaxFactor;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) BOOL supportsCropping;
@property (nonatomic) BOOL magnifyEnabled;
@property (nonatomic) BOOL portrait;
@property (retain, nonatomic) NSString *wallpaperName;
@property (retain, nonatomic) NSData *imageHashData;
@property (nonatomic) long long wallpaperMode;
@property (retain, nonatomic) NSDictionary *wallpaperKitData;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) double stillTimeInVideo;
@property (retain, nonatomic) NSString *wallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *wallpaperOptions;
@property (nonatomic) BOOL wallpaperWasUserSet;
@property (retain, nonatomic) NSData *colorData;
@property (retain, nonatomic) NSString *colorName;
@property (retain, nonatomic) NSData *gradientData;

+ (id)homeScreenWrapperForLegacyDefaults:(id)a0;
+ (id)lockScreenWrapperForLegacyDefaults:(id)a0;

- (id)wallpaperDefaultsDict;
- (void).cxx_destruct;
- (id)initWithWallpaperDefaultsDict:(id)a0;

@end
