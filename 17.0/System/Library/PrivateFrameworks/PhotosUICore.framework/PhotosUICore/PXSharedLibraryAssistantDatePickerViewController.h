@class OBBoldTrayButton, NSString, UITableViewCell, UIDatePicker, NSDate, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantDatePickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXAssistantViewController> {
    UITableViewCell *_startDateCell;
    UITableViewCell *_datePickerCell;
    UITableViewCell *_countsCell;
    BOOL _isShowingFullPicker;
    NSString *_cachedFooterText;
}

@property (readonly, nonatomic) OBBoldTrayButton *titleButton;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (nonatomic) BOOL hasCustomDate;
@property (retain, nonatomic) NSDate *pickedDate;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)continueButtonTapped:(id)a0;
- (void)_updateFooterText;
- (void)resetPickerDate;
- (void)_continueAssistant;
- (id)_datePickerCellForTableView:(id)a0;
- (void)_datePickerDidChange:(id)a0;
- (void)_resetPickerWithDate:(id)a0;
- (id)_startDateCellForTableView:(id)a0;
- (void)_updateHeaderText;
- (void)_updateStartDateCell;
- (void)_updateViewModelForStartDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)footerTextWithCompletion:(id /* block */)a0;
- (void)restorePickerDate;
- (void)skipButtonTapped:(id)a0;
- (void)skipPickedDateAndContinue;
- (void)truncateAndSetPickedDate:(id)a0;
- (void)usePickedDateAndContinueWithCompletionHandler:(id /* block */)a0;

@end
