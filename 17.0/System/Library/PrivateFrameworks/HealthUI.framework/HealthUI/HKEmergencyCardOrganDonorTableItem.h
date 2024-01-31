@class HKMedicalIDEditorPickerCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorPickerCell *_editableCell;
    BOOL _isEditing;
}

- (id)possibleValues;
- (void).cxx_destruct;
- (id)title;
- (void)commitEditing;
- (id)_createEditableCell;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(id /* block */)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;

@end
