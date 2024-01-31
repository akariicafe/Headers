@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isShowURLsInURLAutocompleteDebugChannelEnabled;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isSafariProfilesEnabled;
@property (class, readonly, nonatomic) BOOL isEnhancedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL isLockedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL isOngoingCredentialSharingEnabled;
@property (class, readonly, nonatomic) BOOL isAirDropPasswordsEnabled;
@property (class, readonly, nonatomic) BOOL isResponsiveCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isMoreSearchProviderSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isReflectUserIntentInSearchEnabled;
@property (class, readonly, nonatomic) BOOL isSearchUIRefinementsEnabled;
@property (class, readonly, nonatomic) BOOL isProfileStartPageCustomizationEnabled;
@property (class, readonly, nonatomic) BOOL isSiriReadThisEnabled;
@property (class, readonly, nonatomic) BOOL isDifferentPrivateBrowsingSearchEngineEnabled;
@property (class, readonly, nonatomic) BOOL isNewTabAndWindowSyncingEnabled;

+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)_isPasswordSharingAvailable;
+ (void)toggleShowURLsInURLAutocompleteDebugChannel;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;

@end
