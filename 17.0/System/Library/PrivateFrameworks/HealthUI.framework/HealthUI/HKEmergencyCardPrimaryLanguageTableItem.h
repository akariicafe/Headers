@class NSArray, HKMedicalIDEditorLanguageCell, HKSpokenLanguage, _HKMedicalIDMultilineStringCell;
@protocol HKEmergencyCardPrimaryLanguageUpdateDelegate;

@interface HKEmergencyCardPrimaryLanguageTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate> {
    HKMedicalIDEditorLanguageCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_displayCell;
    BOOL _isEditing;
    NSArray *_mostLikelyLanguages;
    NSArray *_allSpokenLanguages;
    HKSpokenLanguage *_currentLanguage;
}

@property (weak, nonatomic) id<HKEmergencyCardPrimaryLanguageUpdateDelegate> delegate;

- (void).cxx_destruct;
- (id)title;
- (id)initInEditMode:(BOOL)a0;
- (void)presentSpokenLanguageController;
- (id)_createEditableCell;
- (id)attributedStringForCurrentLanguage;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCancelLanguageSelection;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didSelectCellWithLanguage:(id)a0;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (void)setCurrentLanguage:(BOOL)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;

@end
