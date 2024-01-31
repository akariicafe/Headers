@class NSString, NSDictionary, NSDate, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface ICNAIdentityManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (copy, nonatomic) NSDictionary *salts;
@property (copy, nonatomic) NSString *identityTimestampYYYYMM;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *privateUserID;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *encryptedKVStore;
@property (nonatomic) unsigned long long startYear;
@property (nonatomic) unsigned long long startMonth;
@property (copy, nonatomic) NSDate *currentDateForTesting;
@property (nonatomic) BOOL identifierResetOccurred;

+ (id)sharedManager;
+ (id)newSalt;
+ (id)saltedID:(id)a0 withSalt:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_keyValueStoreDidChangeExternally:(id)a0;
- (void)debug_clearIdentifiers;
- (void)debug_dumpIdentifiers;
- (void)debug_forceRegenerateIdentifiers;
- (void)loadIdentifiersAndRegenerateIfNecessary;
- (void)loadIdentifiersFromKVSAndForceRegenerateIdentity:(BOOL)a0;
- (id)saltedID:(id)a0 forClass:(Class)a1;
- (id)todayTimestampYYYYMM:(id)a0;

@end
