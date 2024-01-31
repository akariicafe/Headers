@class NSString, PKApplyRadioPickerSectionController, PKApplyInlineFooterSectionController;

@interface PKApplyFieldsCollectionViewController : PKApplyCollectionViewController <PKApplyInlineFooterSectionControllerDelegate, PKApplyCollectionViewSectionControllerDelegate> {
    PKApplyInlineFooterSectionController *_inlineFooterSectionController;
    PKApplyRadioPickerSectionController *_pickerSectionController;
    BOOL _needsToReachEndOfPage;
    unsigned long long _useInlinePrimaryButton;
    BOOL _primaryButtonLoading;
}

@property (readonly, nonatomic) BOOL hasFieldsSubmitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_keyboardWillShow:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_determineNextEnablementWithPage:(id)a0;
- (id)_recomputeSections;
- (void)_terminateFlow;
- (void)_updatePrimaryButton;
- (void)handleNextStep;
- (void)primaryButtonTapped;
- (void)recomputeSectionsWithReload:(BOOL)a0;
- (void)reloadDataAnimated:(BOOL)a0;
- (void)showButtonSpinner:(BOOL)a0;
- (void)submitFields;
- (void)verifyAndSubmitFields;

@end
