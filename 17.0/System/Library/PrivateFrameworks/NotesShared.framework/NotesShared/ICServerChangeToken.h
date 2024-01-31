@class NSString, CKServerChangeToken, NSData, ICAccount, CKRecordZoneID;

@interface ICServerChangeToken : NSManagedObject <ICLoggable>

@property (retain, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *ckServerChangeTokenData;
@property (retain, nonatomic) CKServerChangeToken *ckServerChangeToken;
@property (nonatomic) long long databaseScope;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addServerChangeTokenForAccount:(id)a0 ckServerChangeToken:(id)a1 zoneID:(id)a2 databaseScope:(long long)a3 context:(id)a4;
+ (id)serverChangeTokenForAccount:(id)a0 zoneID:(id)a1 databaseScope:(long long)a2 context:(id)a3;
+ (id)serverChangeTokensMatchingPredicate:(id)a0 inContext:(id)a1;

- (void)setDatabaseScope:(long long)a0;
- (long long)databaseScope;
- (void)didTurnIntoFault;
- (void).cxx_destruct;
- (id)ic_loggingValues;

@end
