@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)_savePCSDataToCache;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (id)itemTypeName;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)hasAllPCSData;
- (BOOL)_decryptPCS;

@end
