@class NSArray, UIBarButtonItem;

@interface PSEditableListController : PSListController {
    BOOL _editable;
    BOOL _editingDisabled;
}

@property (readonly, nonatomic) UIBarButtonItem *editBarButtonItem;
@property (retain, nonatomic) NSArray *previousRightBarButtonItems;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)init;
- (void)suspend;
- (void).cxx_destruct;
- (void)setEditable:(BOOL)a0;
- (BOOL)editable;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)didLock;
- (void)_setEditable:(BOOL)a0 animated:(BOOL)a1;
- (void)editDoneTapped;
- (BOOL)performDeletionActionForSpecifier:(id)a0;
- (void)setEditButtonEnabled:(BOOL)a0;
- (void)setEditingButtonHidden:(BOOL)a0 animated:(BOOL)a1;

@end
