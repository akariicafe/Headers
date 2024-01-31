@class UITableViewCell, UIView;

@interface EKEventDeleteButtonEditItem : EKEventEditItem {
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

@property (readonly, nonatomic) UIView *sourceViewForPopover;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)setDeleteButtonTarget:(id)a0 action:(SEL)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
