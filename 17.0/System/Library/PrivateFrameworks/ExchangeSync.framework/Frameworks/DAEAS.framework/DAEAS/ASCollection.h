@class NSString, NSArray, NSNumber, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {
    long long _dataclass;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    int _sniffableType;
    BOOL _checkedShouldSniffInvites;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (id)status;
- (id)description;
- (long long)dataclass;
- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)collectionId;
- (void)setCollectionId:(id)a0;
- (id)changedItems;
- (id)syncKey;
- (id)moreAvailable;
- (void)setMoreAvailable:(id)a0;
- (id)responseItems;
- (void)setSyncKey:(id)a0;
- (void)setChangedItems:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)setDataclassString:(id)a0;
- (void)setParentResponse:(id)a0;
- (void)setResponseItems:(id)a0;
- (int)sniffableTypeForAccount:(id)a0;

@end
