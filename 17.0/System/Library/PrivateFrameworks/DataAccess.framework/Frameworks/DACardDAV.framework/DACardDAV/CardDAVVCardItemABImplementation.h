@class NSString, NSMutableDictionary, NSData, NSURL, NSNumber;
@protocol DACardDAVRecord;

@interface CardDAVVCardItemABImplementation : CardDAVVCardItem {
    NSData *_dataPayload;
    id<DACardDAVRecord> _cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSURL *_serverID;
    NSNumber *_clientID;
}

@property (nonatomic) void *abRecord;
@property (nonatomic) unsigned int abRecordType;

- (void)dealloc;
- (void)setClientID:(id)a0;
- (id)clientID;
- (void).cxx_destruct;
- (void)setDataPayload:(id)a0;
- (id)serverID;
- (void)setServerID:(id)a0;
- (id)syncKey;
- (id)dataPayload;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;
- (void)setSyncKey:(id)a0;
- (id)convertToDAContactSearchResultElement;
- (BOOL)deleteFromContainer:(void *)a0;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setLocalItem:(void *)a0;
- (id)UUIDToPersonCache;
- (id)cardDAVRecordItem;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)a0;
- (BOOL)deleteFromContainer:(void *)a0 account:(id)a1;
- (id)initWithABRecord:(void *)a0 addressBook:(void *)a1 outNeedsDBSave:(BOOL *)a2 maxImageSize:(long long)a3 maxResourceSize:(long long)a4 inContainerWithURL:(id)a5;
- (void)loadClientIDs;
- (BOOL)saveIfGroupWithLocalObject:(id)a0 toContainer:(id)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (unsigned long long)saveWithLocalObject:(id)a0 toContainer:(id)a1 containerURL:(id)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5 shouldSaveGroups:(BOOL)a6;
- (void)setCardDAVRecordItem:(id)a0;
- (void)setUUIDToPersonCache:(id)a0;

@end
