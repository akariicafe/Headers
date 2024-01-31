@class HKMedicalIDEditorSwitchCell, UITableView;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate> {
    HKMedicalIDEditorSwitchCell *_cell;
}

@property (weak, nonatomic) UITableView *tableView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (id)titleForHeader;
- (id)titleForFooter;
- (id)_editCell;
- (id)_viewCellForTableView:(id)a0;
- (id)footerTextViewString;
- (BOOL)hasPresentableData;
- (void)switchWasChanged:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
