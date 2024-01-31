@class NSArray, NSDictionary, NSMutableDictionary;

@interface FPStitchingSession : NSObject {
    NSMutableDictionary *_stitchedFields;
    NSMutableDictionary *_originalItems;
    NSMutableDictionary *_stitchedItems;
    NSMutableDictionary *_stitchedPlaceholders;
    NSMutableDictionary *_placeholderReplacements;
    NSMutableDictionary *_deletedItems;
    BOOL _started;
    BOOL _finished;
}

@property (copy, nonatomic) id /* block */ placeholdersCreationBlock;
@property (readonly, nonatomic) NSArray *placeholderItems;
@property (readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property (readonly, nonatomic) NSDictionary *stitchedItemsByParentID;
@property (readonly, nonatomic) NSArray *placeholderReplacementsIDs;
@property (readonly, nonatomic) NSArray *deletedIDs;
@property (readonly, nonatomic) BOOL isActive;

- (id)init;
- (void)dealloc;
- (void)finish;
- (void)start;
- (void)flush;
- (void).cxx_destruct;
- (void)deleteItems:(id)a0;
- (id)createArchivePlaceholderForItem:(id)a0 underParent:(id)a1 inProviderDomainID:(id)a2;
- (void)associateItem:(id)a0 withPlaceholderID:(id)a1;
- (BOOL)cleanStitchedItemForItemID:(id)a0;
- (id)createGenericArchivePlaceholderUnderParent:(id)a0 inProviderDomainID:(id)a1;
- (id)createPlaceholderWithCopyOfExistingItem:(id)a0 lastUsageUpdatePolicy:(unsigned long long)a1 underParent:(id)a2 inProviderDomainID:(id)a3;
- (id)createPlaceholderWithName:(id)a0 contentType:(id)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
- (id)createPlaceholderWithName:(id)a0 isFolder:(BOOL)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
- (id)createPlaceholderWithName:(id)a0 typeIdentifier:(id)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
- (void)finishWithItem:(id)a0 error:(id)a1;
- (void)finishWithItems:(id)a0 error:(id)a1;
- (id)itemWithPlaceholderID:(id)a0;
- (void)replacePlaceholderWithID:(id)a0 withItem:(id)a1;
- (void)transformItems:(id)a0 handler:(id /* block */)a1;
- (void)trashItems:(id)a0;

@end
