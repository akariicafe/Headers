@class NSString, HKMedicalIDEditorSwitchCell, UITableView;

@interface HKEmergencyCardShareInfoTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate, UITextViewDelegate> {
    HKMedicalIDEditorSwitchCell *_cell;
}

@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initInEditMode:(BOOL)a0;
- (id)titleForFooter;
- (id)_editCell;
- (id)_viewCellForTableView:(id)a0;
- (id)footerTextViewString;
- (BOOL)hasPresentableData;
- (void)switchWasChanged:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
