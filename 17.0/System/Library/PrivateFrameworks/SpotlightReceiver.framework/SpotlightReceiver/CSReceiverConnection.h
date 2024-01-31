@class NSArray, NSObject;
@protocol SpotlightReceiver;

@interface CSReceiverConnection : CSXPCConnection

@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<SpotlightReceiver> *receiver;
@property (copy, nonatomic) NSArray *bundleIDs;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy, nonatomic) NSArray *INIntentClassNames;

- (int)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)deleteFromBundle:(id)a0 sinceDate:(id)a1 domains:(id)a2 deletes:(id)a3;
- (int)deleteAllUserActivities:(id)a0;
- (id)initWithReceiver:(id)a0 forServiceName:(id)a1;
- (int)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (int)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (int)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (int)addInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (int)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (int)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)handleSetup:(id)a0;
- (int)donateRelevantShortcuts:(id)a0 bundleID:(id)a1;
- (int)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;

@end
