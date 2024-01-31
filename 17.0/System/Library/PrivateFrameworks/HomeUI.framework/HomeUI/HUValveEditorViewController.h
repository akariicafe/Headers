@class NSMutableSet, HUValveEditorItemManager, HUNameItemModuleController;

@interface HUValveEditorViewController : HUItemTableViewController

@property (retain, nonatomic) HUValveEditorItemManager *valveEditorItemManager;
@property (retain, nonatomic) HUNameItemModuleController *nameModuleController;
@property (retain, nonatomic) NSMutableSet *moduleControllers;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)diffableDataItemManager:(id)a0 willUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3 isInitialLoad:(BOOL)a4;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithSourceItem:(id)a0 editorMode:(unsigned long long)a1;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (id)itemModuleControllers;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
