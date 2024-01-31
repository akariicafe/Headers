@class NSArray;

@interface STRestrictingApplicationsGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (copy) NSArray *authorizationRecords;

- (id)init;
- (void).cxx_destruct;
- (id)isFamilyControlsEnabled:(id)a0;
- (void)setFamilyControlsEnabled:(id)a0 forSpecifier:(id)a1;
- (void)_updateSpecifiersWithAuthorizationRecords;
- (long long)getAuthorizationStatusForRecordIdentifier:(id)a0 fromRecords:(id)a1;

@end
