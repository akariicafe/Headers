@class HKMedicalIDEditorPickerCell, _HKMedicalIDMultilineStringCell;

@interface HKEmergencyCardBloodTypeTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorPickerCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_displayCell;
    BOOL _isEditing;
}

- (void).cxx_destruct;
- (id)title;
- (id)_createEditableCell;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;

@end
