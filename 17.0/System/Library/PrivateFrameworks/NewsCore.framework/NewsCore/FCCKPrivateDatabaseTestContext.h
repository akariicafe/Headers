@class CKRecordZone, CKDatabase, CKRecordID, NSArray, FCCKPrivateDatabase, NSDictionary, CKRecord, CKRecordZoneID, TCKDatabase;

@interface FCCKPrivateDatabaseTestContext : NSObject

@property (readonly, nonatomic) FCCKPrivateDatabase *database;
@property (readonly, nonatomic) CKDatabase *ckDatabase;
@property (readonly, nonatomic) CKDatabase *ckDatabaseWithZoneWidePCS;
@property (readonly, nonatomic) CKDatabase *ckSecureDatabase;
@property (readonly, nonatomic) TCKDatabase *tckDatabase;
@property (readonly, nonatomic) TCKDatabase *tckDatabaseWithZoneWidePCS;
@property (readonly, nonatomic) TCKDatabase *tckSecureDatabase;
@property (readonly, nonatomic) CKRecordID *clientRecordID;
@property (readonly, nonatomic) CKRecordID *clientRecordIDWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordID *clientRecordIDSecure;
@property (readonly, nonatomic) NSArray *allClientRecordIDs;
@property (readonly, nonatomic) CKRecordID *serverRecordID;
@property (readonly, nonatomic) CKRecordID *serverRecordIDWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordID *serverRecordIDSecure;
@property (readonly, nonatomic) NSArray *allServerRecordIDs;
@property (readonly, nonatomic) CKRecord *clientRecord;
@property (readonly, nonatomic) CKRecord *clientRecordWithZoneWidePCS;
@property (readonly, nonatomic) CKRecord *clientRecordSecure;
@property (readonly, nonatomic) NSArray *allClientRecords;
@property (readonly, nonatomic) NSDictionary *allClientRecordsByID;
@property (readonly, nonatomic) CKRecord *serverRecord;
@property (readonly, nonatomic) CKRecord *serverRecordWithZoneWidePCS;
@property (readonly, nonatomic) CKRecord *serverRecordSecure;
@property (readonly, nonatomic) NSArray *allServerRecords;
@property (readonly, nonatomic) CKRecordZoneID *clientZoneID;
@property (readonly, nonatomic) CKRecordZoneID *clientZoneIDWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordZoneID *clientZoneIDSecure;
@property (readonly, nonatomic) NSArray *allClientZoneIDs;
@property (readonly, nonatomic) CKRecordZoneID *serverZoneID;
@property (readonly, nonatomic) CKRecordZoneID *serverZoneIDWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordZoneID *serverZoneIDSecure;
@property (readonly, nonatomic) NSArray *allServerZoneIDs;
@property (readonly, nonatomic) CKRecordZone *clientZone;
@property (readonly, nonatomic) CKRecordZone *clientZoneWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordZone *clientZoneSecure;
@property (readonly, nonatomic) NSArray *allClientZones;
@property (readonly, nonatomic) NSDictionary *allClientZonesByID;
@property (readonly, nonatomic) CKRecordZone *serverZone;
@property (readonly, nonatomic) CKRecordZone *serverZoneWithZoneWidePCS;
@property (readonly, nonatomic) CKRecordZone *serverZoneSecure;
@property (readonly, nonatomic) NSArray *allServerZones;
@property (readonly, nonatomic) CKRecordID *defaultZoneClientRecordID;
@property (readonly, nonatomic) CKRecordID *defaultZoneClientRecordIDSecure;
@property (readonly, nonatomic) NSArray *allDefaultZoneClientRecordIDs;
@property (readonly, nonatomic) CKRecordID *defaultZoneServerRecordID;
@property (readonly, nonatomic) CKRecordID *defaultZoneServerRecordIDSecure;
@property (readonly, nonatomic) CKRecord *defaultZoneClientRecord;
@property (readonly, nonatomic) CKRecord *defaultZoneClientRecordSecure;
@property (readonly, nonatomic) NSArray *allDefaultZoneClientRecords;
@property (readonly, nonatomic) NSDictionary *allDefaultZoneClientRecordsByID;
@property (readonly, nonatomic) CKRecord *defaultZoneServerRecord;
@property (readonly, nonatomic) CKRecord *defaultZoneServerRecordSecure;

- (id)init;
- (void).cxx_destruct;

@end
