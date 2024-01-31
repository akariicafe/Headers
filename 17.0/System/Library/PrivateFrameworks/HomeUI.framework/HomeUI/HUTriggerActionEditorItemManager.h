@class HUButtonItem, HUTriggerHeaderItem, HUViewControllerTableViewItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager

@property (retain, nonatomic) HUViewControllerTableViewItem *gridItem;
@property (retain, nonatomic) HUTriggerHeaderItem *addShortcutHeader;
@property (retain, nonatomic) HUButtonItem *addShortcutItem;

- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 showShortcutItem:(BOOL)a1;

@end
