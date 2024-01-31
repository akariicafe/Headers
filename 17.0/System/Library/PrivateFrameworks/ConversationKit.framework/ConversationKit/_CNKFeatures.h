@interface _CNKFeatures : NSObject

@property (class, nonatomic, readonly) _CNKFeatures *sharedInstance;

@property (nonatomic, readonly) BOOL isSystemApertureEnabled;
@property (nonatomic, readonly) BOOL isIncomingCallBannerEnabled;
@property (nonatomic, readonly) BOOL isHeroImageEnabled;
@property (nonatomic, readonly) BOOL isHeroTitleEnabled;
@property (nonatomic, readonly) BOOL isDialPadEnabled;
@property (nonatomic, readonly) BOOL isButtonLayoutEnabled;
@property (nonatomic, readonly) BOOL isScreeningLiveActivityEnabled;
@property (nonatomic, readonly) BOOL shouldEmbedSwapBanner;
@property (nonatomic, readonly) BOOL shouldShowFullScreenCallWaiting;
@property (nonatomic, readonly) BOOL isDominoEnabled;
@property (nonatomic, readonly) BOOL isNameAndPhotoC3Enabled;

- (id)init;
- (void).cxx_destruct;

@end
