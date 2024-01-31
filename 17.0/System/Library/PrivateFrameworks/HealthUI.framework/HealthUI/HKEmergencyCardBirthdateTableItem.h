@class HKMedicalIDEditorDateCell, NSCalendar;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorDateCell *_editableCell;
    NSCalendar *_gregorianCalendar;
}

- (void).cxx_destruct;
- (id)title;
- (id)initInEditMode:(BOOL)a0;
- (id)_cachedCalendar;
- (id)_createEditableCell;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (void)timeZoneDidChange:(id)a0;

@end
