@class NSString, NSMutableDictionary, NSURL, NSData, NSNumber, NSArray;
@protocol DACardDAVRecord;

@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement>

@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) NSNumber *clientID;
@property (readonly, nonatomic) NSData *dataPayload;
@property (readonly, nonatomic) id<DACardDAVRecord> cardDAVRecordItem;
@property (readonly, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSMutableDictionary *UUIDToPersonCache;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)currentImplementationClass;
+ (id)itemWithABRecord:(void *)a0 addressBook:(void *)a1 outNeedsDBSave:(BOOL *)a2 maxImageSize:(long long)a3 maxResourceSize:(long long)a4 inContainerWithURL:(id)a5;
+ (id)itemWithDACardDAVRecord:(id)a0 contactStore:(id)a1 outNeedsDBSave:(BOOL *)a2 maxImageSize:(long long)a3 maxResourceSize:(long long)a4 inContainerWithURL:(id)a5;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;
- (id)convertToDAContactSearchResultElement;
- (BOOL)deleteFromContainer:(void *)a0;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setLocalItem:(void *)a0;
- (void *)abRecord;
- (unsigned int)abRecordType;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)a0;
- (BOOL)deleteFromContainer:(void *)a0 account:(id)a1;
- (void)loadClientIDs;
- (BOOL)saveIfGroupWithLocalObject:(id)a0 toContainer:(id)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (unsigned long long)saveWithLocalObject:(id)a0 toContainer:(id)a1 containerURL:(id)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5 shouldSaveGroups:(BOOL)a6;

@end
