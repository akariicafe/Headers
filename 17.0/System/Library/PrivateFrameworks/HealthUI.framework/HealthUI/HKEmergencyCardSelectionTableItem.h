@class UITableViewCell;
@protocol HKEmergencyCardSelectionTableItemDelegate;

@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {
    UITableViewCell *_cell;
}

@property (weak, nonatomic) id<HKEmergencyCardSelectionTableItemDelegate> selectionDelegate;

- (void).cxx_destruct;
- (id)title;
- (BOOL)hasPresentableData;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;

@end
