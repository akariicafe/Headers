@class WBSAppleAccountInformationProvider;

@interface FeatureManager : WBUFeatureManager {
    WBSAppleAccountInformationProvider *_accountInformationProvider;
    BOOL _cloudAccountIsHSA2;
    BOOL _isCloudSyncEnabled;
}

@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable;
@property (readonly, nonatomic, getter=isCustomTabGroupsEnabled) BOOL customTabGroupsEnabled;
@property (readonly, nonatomic, getter=isFloatingSidebarButtonEnabled) BOOL floatingSidebarButtonEnabled;
@property (readonly, nonatomic, getter=isTabGroupButtonEnabled) BOOL tabGroupButtonEnabled;
@property (readonly, nonatomic, getter=areTabGroupSuggestionsEnabled) BOOL tabGroupSuggestionsEnabled;
@property (readonly, nonatomic, getter=areSharedTabGroupsEnabled) BOOL sharedTabGroupsEnabled;

+ (id)sharedFeatureManager;

- (id)init;
- (BOOL)isCloudAccountHSA2;
- (void).cxx_destruct;
- (BOOL)_isSafariSyncEnabled;
- (void)_updateAccessLevel;
- (void)_accountsDidChange;

@end
