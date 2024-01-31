@interface CNKFeatures : NSObject

@property (class, readonly, nonatomic) CNKFeatures *sharedInstance;

@property (readonly, nonatomic) BOOL isSystemApertureEnabled;
@property (readonly, nonatomic) BOOL isIncomingCallBannerEnabled;
@property (readonly, nonatomic) BOOL isHeroImageEnabled;
@property (readonly, nonatomic) BOOL isHeroTitleEnabled;
@property (readonly, nonatomic) BOOL isDialPadEnabled;
@property (readonly, nonatomic) BOOL isButtonLayoutEnabled;
@property (readonly, nonatomic) BOOL shouldEmbedSwapBanner;
@property (readonly, nonatomic) BOOL shouldShowFullScreenCallWaiting;
@property (readonly, nonatomic) BOOL isDominoEnabled;
@property (readonly, nonatomic) BOOL isNameAndPhotoC3Enabled;

@end
