@class NSMutableDictionary, NSDictionary, NSManagedObjectContext;

@interface ICExpansionState : NSObject

@property (class, readonly, nonatomic) ICExpansionState *sharedExpansionState;

@property (retain, nonatomic) NSMutableDictionary *expansionState;
@property (retain, nonatomic) NSManagedObjectContext *modernViewContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (readonly, nonatomic) NSDictionary *archiveDictionary;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)collapseItemIdentifier:(id)a0 context:(id)a1;
- (void)applyArchiveDictionary:(id)a0;
- (id)archivableIdentifierForItemIdentifier:(id)a0;
- (void)collapseItemIdentifier:(id)a0 itemType:(long long)a1 context:(id)a2;
- (void)collapseItemIdentifiers:(id)a0 itemType:(long long)a1 context:(id)a2;
- (id)collapsedItemIdentifiersWithItemType:(long long)a0 context:(id)a1;
- (id)collapsedObjectIDsInContext:(id)a0;
- (void)expandItemIdentifier:(id)a0 context:(id)a1;
- (void)expandItemIdentifier:(id)a0 itemType:(long long)a1 context:(id)a2;
- (void)expandItemIdentifiers:(id)a0 itemType:(long long)a1 context:(id)a2;
- (id)expandedItemIdentifiersWithItemType:(long long)a0 context:(id)a1;
- (id)expandedObjectIDsInContext:(id)a0;
- (id)identifierForArchivableIdentifier:(id)a0 itemType:(long long)a1;
- (BOOL)isSectionIdentiferExpanded:(id)a0 inContext:(id)a1;
- (id)itemIdentifiersExpanded:(BOOL)a0 itemType:(long long)a1 context:(id)a2;
- (long long)itemTypeForItemIdentifier:(id)a0;
- (id)normalizedContext:(id)a0;
- (id)normalizedItemIdentifier:(id)a0;
- (void)setExpanded:(BOOL)a0 itemIdentifier:(id)a1 itemType:(long long)a2 context:(id)a3;

@end
