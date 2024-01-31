@class NSObject, NSString, CKDPCSCache, NSError, CKDPCSData, CKDRecordPCSData;
@protocol OS_dispatch_group, CKSQLiteItem;

@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDPCSCache *cache;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKSQLiteItem> itemID;
@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic) BOOL didFetchData;
@property (retain, nonatomic) CKDPCSData *pcsData;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSError *dependentPCSFetchError;
@property (nonatomic) BOOL wasFetchedFromCache;
@property (nonatomic) int numRetries;
@property (nonatomic) BOOL shouldRetry;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (readonly, nonatomic) BOOL hasAllPCSData;
@property (readonly, nonatomic) NSString *itemTypeName;
@property (getter=isPCSDataInvalidated) BOOL pcsDataInvalidated;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)_saveUpdatedPCSToServer;
- (BOOL)_savePCSDataToCache;
- (void)main;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_willRetryFetch;
- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)canBeUsedForOperation:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)needsAdditionalPCSCreation;

@end
