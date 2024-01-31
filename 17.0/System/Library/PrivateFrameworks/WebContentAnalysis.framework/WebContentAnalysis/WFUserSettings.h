@class NSString, NSArray, NSDictionary, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject {
    NSDictionary *_userSettings;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long restrictionType;
@property (readonly, nonatomic) BOOL canEditRestrictionType;
@property (retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property (retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenBlackListedSites;
@property (retain, nonatomic) NSArray *whiteListAllowedSites;
@property (readonly, nonatomic) BOOL canEditWhiteListAllowedSites;
@property (nonatomic) BOOL overridesAllowed;
@property (readonly, nonatomic) BOOL canEditOverridesAllowed;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;

- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0;
- (BOOL)_addManagedDefaults:(id)a0;
- (id)_managedDefaultsPath;
- (id)contentFilterOverriddenSites;
- (void)dealloc;
- (BOOL)whiteListContainsURL:(id)a0;
- (BOOL)restrictWebEnabled;
- (BOOL)autoWhitelistContainsURL:(id)a0;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (void)setContentFilterEnabled:(BOOL)a0;
- (id)_userSettingsForUser:(id)a0;
- (id)contentFilterOverriddenWhiteListedSitesBufferWithAdditionalURLStrings:(id)a0;
- (id)whiteListedSitesBuffer;
- (void)setRestrictWebEnabled:(BOOL)a0;
- (BOOL)_setManagedDefaults:(id)a0;
- (BOOL)whiteListEnabled;
- (void)setContentFilterOverridesEnabled:(BOOL)a0;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)a0;
- (id)initWithUserName:(id)a0;
- (BOOL)canEditAlwaysAllowHTTPS;
- (BOOL)alwaysAllowHTTPS;
- (BOOL)contentFilterListsAllowURL:(id)a0;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (BOOL)contentFilterOverridesEnabled;
- (BOOL)contentFilterEnabled;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0 withAppleAllowList:(id)a1;
- (void)setAlwaysAllowHTTPS:(BOOL)a0;
- (BOOL)contentFilterOverriddenList:(id)a0 containsURL:(id)a1;
- (void)setWhiteListEnabled:(BOOL)a0;

@end
