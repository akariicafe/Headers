@class NSString;

@interface PXPeopleUISettings : PXSettings

@property (nonatomic) BOOL enableNewCropManager;
@property (nonatomic) BOOL enableNewOneUpWidget;
@property (nonatomic) BOOL enablePetsParity;
@property (nonatomic) BOOL enableNewPeoplePetsCuration;
@property (nonatomic) BOOL useSummaryAssetsForCuration;
@property (nonatomic) BOOL alwaysShowBootstrap;
@property (nonatomic) BOOL enableBootstrapDemoMode;
@property (nonatomic) BOOL useBootstrapMockDataSource;
@property (nonatomic) BOOL displayBootstrapSuggestionType;
@property (nonatomic) BOOL alwaysShowBanner;
@property (nonatomic) long long debugBannerStyle;
@property (nonatomic) long long debugBannerAttribution;
@property (nonatomic) BOOL ignoreNegativeSuggestionFeedback;
@property (nonatomic) long long negativeFeedbackWaitPeriodMinutes;
@property (nonatomic) BOOL ignoreAttributionFiltering;
@property (copy, nonatomic) NSString *debugContactIdentifier;
@property (nonatomic, getter=shouldAlwaysShowMe) BOOL alwaysShowMe;
@property (nonatomic) BOOL displayReviewMorePhotosSuggestionType;
@property (nonatomic) BOOL displayReviewMorePhotosDate;
@property (nonatomic) BOOL forceReviewMorePhotosInterimLoading;
@property (nonatomic, getter=shouldDebugBlurredCells) BOOL debugBlurredCells;
@property (nonatomic) BOOL showReviewPhotosObjectType;
@property (nonatomic) BOOL enableReviewPhotosDemoMode;
@property (nonatomic) BOOL useReviewPhotosMockDataSource;
@property (nonatomic) BOOL debugFadeLayer;
@property (nonatomic) BOOL showUUIDIfNoName;
@property (nonatomic) BOOL evictsCacheWhenBackgrounded;
@property (nonatomic) BOOL useGridZeroForDetails;
@property (nonatomic) BOOL enableAddPeople;
@property (nonatomic) BOOL includePetsInAddPeople;
@property (nonatomic) long long minUnverifiedFaceCount;
@property (nonatomic) BOOL useMockSocialGroupData;

+ (id)sharedInstance;
+ (id)_sharedContactPickerDelegate;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
