@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_savePCSDataToCache;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)needsChainPCSCreation;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (id)itemTypeName;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSDataFromDatabase;
- (void).cxx_destruct;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_createAdditionalPCS;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptPCS;

@end
