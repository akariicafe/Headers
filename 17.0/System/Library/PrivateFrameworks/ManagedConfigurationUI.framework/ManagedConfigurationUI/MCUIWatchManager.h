@class NSSManager, NSArray, NSMutableDictionary, NSDictionary, ACAccount;

@interface MCUIWatchManager : NSObject

@property (retain, nonatomic) NSSManager *nssManager;
@property (retain, nonatomic) NSMutableDictionary *cachedProfiles;
@property (retain, nonatomic) NSMutableDictionary *cachedProfileSummaries;
@property (retain, nonatomic) NSMutableDictionary *cachedRMConfigurationViewModels;
@property (nonatomic) unsigned long long fetchStatus;
@property (readonly, nonatomic) long long profileCount;
@property (retain, nonatomic) NSArray *mdmProfilesInfo;
@property (retain, nonatomic) NSArray *configProfilesInfo;
@property (retain, nonatomic) ACAccount *rmAccount;
@property (retain, nonatomic) NSDictionary *managedAppsUninstalledOnMDMRemoval;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchProfiles;
- (void)_handleFetchProfilesError:(id)a0;
- (void)_unarchiveProfilePayloadsSummaryFromData:(id)a0 forProfileIdentifier:(id)a1;
- (void)_unarchiveRMConfigurationViewModelsFromData:(id)a0 forProfileIdentifier:(id)a1;
- (void)_watchChanged:(id)a0;
- (id)cachedMDMProfileIdentifier;
- (id)cachedProfileForIdentifier:(id)a0;
- (id)cachedProfileSummaryForIdentifier:(id)a0;
- (id)cachedRMConfigurationViewModelsForIdentifier:(id)a0;
- (void)fetchProfileIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;
- (void)reloadProfiles;
- (void)removeProfileIdentifier:(id)a0 completion:(id /* block */)a1;

@end
