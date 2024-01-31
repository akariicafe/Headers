@class NSString, NSDictionary, NSData;

@interface PBUIWallpaperLegacyDefaultsDomain : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *homeScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) BOOL homeScreenWallpaperWasUserSet;
@property (retain, nonatomic) NSString *lockScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) BOOL lockScreenWallpaperWasUserSet;
@property (nonatomic) double homeScreenParallaxFactor;
@property (nonatomic) double homeScreenZoomScale;
@property (retain, nonatomic) NSString *homeScreenCropRectString;
@property (nonatomic) BOOL homeScreenSupportsCropping;
@property (nonatomic) BOOL homeScreenMagnifyEnabled;
@property (nonatomic) BOOL homeScreenPortrait;
@property (retain, nonatomic) NSString *homeScreenWallpaperName;
@property (retain, nonatomic) NSDictionary *homeScreenWallpaperKitData;
@property (nonatomic) double lockScreenParallaxFactor;
@property (nonatomic) double lockScreenZoomScale;
@property (retain, nonatomic) NSString *lockScreenCropRectString;
@property (nonatomic) BOOL lockScreenSupportsCropping;
@property (nonatomic) BOOL lockScreenMagnifyEnabled;
@property (nonatomic) BOOL lockScreenPortrait;
@property (nonatomic) BOOL lockScreenHasVideo;
@property (nonatomic) double lockScreenStillTimeInVideo;
@property (retain, nonatomic) NSString *lockScreenWallpaperName;
@property (retain, nonatomic) NSDictionary *lockScreenWallpaperKitData;
@property (retain, nonatomic) NSData *lockScreenColorData;
@property (retain, nonatomic) NSData *homeScreenColorData;
@property (retain, nonatomic) NSString *lockScreenColorName;
@property (retain, nonatomic) NSString *homeScreenColorName;
@property (retain, nonatomic) NSData *lockScreenImageHashData;
@property (retain, nonatomic) NSData *homeScreenImageHashData;
@property (retain, nonatomic) NSData *lockScreenGradientData;
@property (retain, nonatomic) NSData *homeScreenGradientData;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
