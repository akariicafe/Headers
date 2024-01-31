@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {
    UITableViewCell *_cell;
    long long _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
    struct { unsigned char addedEditControlAsSubview : 1; unsigned char addedReorderControlAsSubview : 1; unsigned char addedReorderSeparatorViewAsSubview : 1; } _flags;
}

@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;

- (void)dealloc;
- (id)reorderControl:(BOOL)a0;
- (id)editControl:(BOOL)a0;
- (id)initWithTableViewCell:(id)a0 editingStyle:(long long)a1;
- (id)reorderSeparatorView:(BOOL)a0;
- (void).cxx_destruct;

@end
