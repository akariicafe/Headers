@class CNContactStore, NSString, KVItemMapper, NSData, KMProviderHistoryLog, NSDictionary;

@interface KMContactStoreBridge : NSObject <KMProviderDeltaDatasetBridge> {
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
    KMProviderHistoryLog *_log;
    NSData *_historyToken;
    NSDictionary *_mapperAdditionalFields;
    unsigned long long _version;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactFetchKeys;

- (long long)itemType;
- (id)lastChangesAccepted;
- (id)init;
- (unsigned long long)version;
- (void).cxx_destruct;
- (id)validity;
- (id)originAppId;
- (BOOL)isDeltaEligible;
- (void)changesAccepted;
- (void)resetDeltaState;
- (BOOL)enumerateDeltaItemsWithError:(id *)a0 addOrUpdateBlock:(id /* block */)a1 removeBlock:(id /* block */)a2;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (void)recordDonationAttempt;
- (BOOL)_checkAuthorizationAndFetchMeCard;
- (id)_fetchContactsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)initWithContactStore:(id)a0 historyLog:(id)a1;

@end
