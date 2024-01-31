@class UIColor, NSArray, NSString, UISUISecurityContext, NSLocale, UITraitCollection;

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double preferredWidth;
@property (retain, nonatomic) NSArray *hostActivityConfigurations;
@property (retain, nonatomic) NSArray *hostHiddenActivityConfigurations;
@property (retain, nonatomic) NSArray *activityItemValueClassNames;
@property (retain, nonatomic) NSArray *activityTypesToCreateInShareService;
@property (retain, nonatomic) UISUISecurityContext *securityScopedURLsForMatching;
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (retain, nonatomic) NSArray *urlsBeingShared;
@property (retain, nonatomic) NSArray *linkPresentationDataForActivityItems;
@property (retain, nonatomic) NSArray *typeIdentifiersForShortcutsMatching;
@property (retain, nonatomic) UIColor *hostTintColor;
@property (retain, nonatomic) NSArray *initialPhotosAssetDetails;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) UITraitCollection *hostTraitCollection;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } hostLayoutMargins;
@property (retain, nonatomic) NSLocale *hostLocale;
@property (retain, nonatomic) NSArray *preferredLocalizations;
@property (nonatomic) long long hostIdiom;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconScale;
@property (nonatomic) long long numberOfVisibleSharingActivities;
@property (nonatomic) long long numberOfVisibleActionActivities;
@property (nonatomic) BOOL allowsEmbedding;
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) BOOL shouldExcludeiCloudSharingActivity;
@property (nonatomic) BOOL shouldSkipPeopleSuggestions;
@property (nonatomic) BOOL canExcludeExtensionActivities;
@property (nonatomic) BOOL canShowShareSheetPlugIns;
@property (nonatomic) BOOL whitelistActionActivitiesOnly;
@property (nonatomic) BOOL linkedBeforeYukon;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) BOOL requestPeopleSuggestionsData;
@property (nonatomic) BOOL useSlotsForPeopleSuggestions;
@property (retain, nonatomic) NSArray *includedActivityTypes;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (retain, nonatomic) NSArray *activityTypeOrder;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) long long sharingStyle;
@property (readonly, nonatomic) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities;

+ (void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_contextForMatchingActivityItems:(id)a0 activityItemValues:(id)a1 activityItemValueClasses:(id)a2;
- (id)availableActivityItemValueClasses;
- (id)contextForMatchingByActivityItemValueClasses;
- (id)contextForMatchingByActivityItems:(id)a0 itemValues:(id)a1;

@end
