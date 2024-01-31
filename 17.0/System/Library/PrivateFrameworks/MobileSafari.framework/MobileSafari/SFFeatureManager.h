@interface SFFeatureManager : WBUFeatureManager

@property (class, readonly, nonatomic) SFFeatureManager *sharedFeatureManager;
@property (class, readonly, nonatomic) BOOL supportsWebpageStatusBar;

@property (readonly, nonatomic) long long preferredCapsuleLayoutStyle;
@property (readonly, nonatomic) BOOL showRectangularTabsInSeparateBar;
@property (readonly, nonatomic) BOOL usesFormatMenuInUnifiedTabBar;
@property (nonatomic) BOOL tabDocumentCanHideToolbar;
@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable;
@property (readonly, nonatomic, getter=isSearchHelperEnabled) BOOL searchHelperEnabled;

- (id)init;
- (void)_updateAccessLevel;

@end
