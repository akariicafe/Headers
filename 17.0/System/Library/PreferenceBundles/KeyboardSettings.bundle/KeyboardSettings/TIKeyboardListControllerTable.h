@class NSMutableArray;

@interface TIKeyboardListControllerTable : UITableView {
    NSMutableArray *_todoList;
}

- (void)dealloc;
- (void)_setEditing:(BOOL)a0 animated:(BOOL)a1 forced:(BOOL)a2;
- (void)addEditingChangeHandler:(id /* block */)a0;

@end
