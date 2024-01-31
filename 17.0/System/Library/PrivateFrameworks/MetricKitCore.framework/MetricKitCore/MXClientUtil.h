@class NSDictionary, NSUserDefaults, NSObject;
@protocol OS_os_log;

@interface MXClientUtil : NSObject <MXClientUtilProtocol>

@property (retain, nonatomic) NSDictionary *clientDictionary;
@property (retain, nonatomic) NSDictionary *clientTeamIDs;
@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)allClients;
- (BOOL)_hasClientInClientDictionary;
- (void)_initClientCollection;
- (void)_initTeamCollection;
- (BOOL)_isClientAvailableFromPersistence;
- (void)_persistClientAvailability;
- (void)_persistClientAvailabilityWithAvailability:(BOOL)a0;
- (void)_persistClientDictionary;
- (void)_persistTeamIDsDictionary;
- (void)_randomReportClientRegistrationForBundleID:(id)a0;
- (id)_retrieveClientAvailablity;
- (id)_retrieveClientDictionary;
- (id)_retrieveTeamIDsDictionary;
- (void)_updateClientAsAvailableFromPersistence;
- (void)_updateClientAsNotAvailableFromPersistence;
- (void)_updateClientDictionaryWithBundleID:(id)a0;
- (void)_updateTeamIDsDictionaryWithTeamID:(id)a0 forBundleID:(id)a1;
- (BOOL)hasAnyClient;
- (BOOL)hasClientForBundleID:(id)a0;
- (BOOL)isClientAvailableForBundleID:(id)a0;
- (BOOL)isClientAvailableFromPersistence;
- (void)persistAllClients;
- (void)registerClientForBundleID:(id)a0;
- (void)registerTeamForBundleID:(id)a0 andTeamID:(id)a1;
- (void)removeClientFromPersistenceForBundleID:(id)a0;
- (void)reportMetricKitUsageForBundleID:(id)a0;
- (void)reportPayloadDeliveriesSuccessWithSuccessCount:(unsigned long long)a0;
- (id)teamIDForBundleID:(id)a0;
- (void)updateClientAsAvailableFromPersistence;
- (void)updateClientAsNotAvailableFromPersistence;

@end
