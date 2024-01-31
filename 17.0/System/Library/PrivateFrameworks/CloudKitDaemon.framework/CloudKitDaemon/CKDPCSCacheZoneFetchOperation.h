@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;
@property (nonatomic) BOOL rolledPCSForZone;

- (int)operationType;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (BOOL)_saveUpdatedPCSToServer;
- (BOOL)_savePCSDataToCache;
- (BOOL)_checkAndUpdateZonePCSIfNeeded;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (void)_fetchDepedentPCSInSharedDatabase;
- (BOOL)_fetchDependentPCS;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (id)itemTypeName;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_willRetryFetch;
- (BOOL)_createAdditionalPCS;
- (BOOL)hasAllPCSData;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (BOOL)_decryptPCS;

@end
