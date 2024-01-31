@class WBTab, WBTabGroup;

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) WBTab *tab;
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;

- (id)dragItems;
- (unsigned long long)hash;
- (BOOL)isSelected;
- (id)accessibilityIdentifier;
- (BOOL)isSpringLoaded;
- (id)description;
- (void).cxx_destruct;
- (id)tabGroupProvider;
- (BOOL)isEqual:(id)a0;
- (id)subitems;
- (BOOL)isExpanded;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsMoveOperation;
- (void)updateListContentConfiguration:(id)a0;
- (BOOL)_sessionContainsLocalTabs:(id)a0;
- (BOOL)_sessionContainsTabDocuments:(id)a0;
- (BOOL)_sessionContainsTabGroup:(id)a0;
- (BOOL)_shouldHidePrivateBrowsingVerticalTabs;
- (void)didSelectItem;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (BOOL)hasSubitems;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1 tabGroup:(id)a2 tab:(id)a3;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (BOOL)shouldPersistSelection;
- (id)swipeActionsConfiguration;
- (void)willToggleExpansionState;

@end
