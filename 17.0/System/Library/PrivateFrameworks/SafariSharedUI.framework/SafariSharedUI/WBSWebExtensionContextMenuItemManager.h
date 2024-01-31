@class NSMutableDictionary, NSMutableOrderedSet;

@interface WBSWebExtensionContextMenuItemManager : NSObject {
    NSMutableOrderedSet *_topLevelEntries;
    NSMutableDictionary *_entriesByIdentifier;
}

- (id)init;
- (void)removeAllItems;
- (void).cxx_destruct;
- (id)didSelectItem:(id)a0;
- (id)_itemToShowForEntry:(id)a0 inContext:(id)a1 inheritedContextTypes:(id)a2;
- (void)_radioEntryDidMoveToGroup:(id)a0;
- (void)_radioEntryWillBeRemovedFromGroup:(id)a0;
- (id)_radioGroupForEntry:(id)a0;
- (void)_radioGroupWillBeSplitByEntry:(id)a0;
- (void)_toggleCheckedStateOfEntry:(id)a0;
- (void)_updateNeighboringRadioGroupsForItemBeingRemoved:(id)a0;
- (void)addItem:(id)a0 outErrorMessage:(id *)a1;
- (id)itemsToShowInContext:(id)a0;
- (void)removeItemWithIdentifier:(id)a0 outErrorMessage:(id *)a1;
- (void)updateItemWithIdentifier:(id)a0 properties:(id)a1 outErrorMessage:(id *)a2;

@end
