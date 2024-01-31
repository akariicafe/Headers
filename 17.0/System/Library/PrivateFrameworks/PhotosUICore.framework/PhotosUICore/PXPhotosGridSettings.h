@class NSString;

@interface PXPhotosGridSettings : PXSettings

@property (nonatomic) BOOL enableBlurInContiguousCollections;
@property (nonatomic) double maximumBlurRadius;
@property (nonatomic) double maximumBlurDimmingFraction;
@property (nonatomic) double blurFadeDistance;
@property (nonatomic) double maximumCommonFocus;
@property (nonatomic) BOOL enableScrollSnapInContiguousCollections;
@property (nonatomic) double scrollSnapMaximumDecelerationFactor;
@property (nonatomic) double scrollSnapMaximumAccelerationFactor;
@property (nonatomic) BOOL enableShowMoreButtonsInEditorialLens;
@property (nonatomic) BOOL enableBlurAndScrollSnapInContiguousGrids;
@property (nonatomic) BOOL emulatesEmptyLibrary;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) double matchMoveAnimationDuration;
@property (nonatomic) BOOL enableInCMM;
@property (nonatomic) BOOL enableSuperzoom;
@property (nonatomic) BOOL enableInvisibleNavBars;
@property (nonatomic) BOOL enableSortAction;
@property (nonatomic) BOOL enableMultiSelectMenu;
@property (nonatomic) BOOL enableNewActionMenu;
@property (nonatomic) BOOL enableContentFiltering;
@property (nonatomic) BOOL enableAspectFitToggle;
@property (nonatomic) BOOL enableAspectFitButton;
@property (nonatomic) BOOL enableZoomInOutButton;
@property (nonatomic) BOOL enableDetailsMenuAction;
@property (nonatomic) BOOL enableFilterDropDownButton;
@property (nonatomic) BOOL enableFilterIndicatorButton;
@property (nonatomic) BOOL alwaysShowFilterIndicatorButton;
@property (nonatomic) BOOL enableFilterViewControllerAnchoringToSender;
@property (nonatomic) BOOL enableTitleLegibilityDimmingFilter;
@property (nonatomic) BOOL backdropStyleForPlacesAndImports;
@property (nonatomic) BOOL colorNavbarArea;
@property (nonatomic) double headerTitleTopSpacing;
@property (nonatomic) double headerTitleBottomSpacing;
@property (nonatomic) BOOL useGradientSectionHeaders;
@property (nonatomic) double sectionHeaderGradientOverhang;
@property (nonatomic) double sectionHeaderGradientAlpha;
@property (nonatomic) double headerGradientHeight;
@property (nonatomic) double headerGradientAlpha;
@property (nonatomic) double behindContentBackgroundGradientAlpha;
@property (nonatomic) double filteringTimeoutDuration;
@property (copy, nonatomic) NSString *actionMenuGlyphName;
@property (nonatomic) BOOL shouldCurateEditorialLens;
@property (nonatomic) BOOL gridBadgesOnlyShowGlyph;
@property (nonatomic) BOOL gridBadgesPortraitEnabled;
@property (nonatomic) BOOL gridBadgesForAllMediaTypes;

+ (id)sharedInstance;
+ (id)_enableTungstenNewFeaturesAction;
+ (id)settingsControllerModule;
+ (id)_enableTungstenNewFeaturesActionPredicate;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
