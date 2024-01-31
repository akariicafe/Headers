@class NSString, UITableViewCell, EKRecurrenceOrdinalPickerViewController;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;
    UITableViewCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)frequency;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)cellForRow:(long long)a0;
- (void)frequencyPickerUpdated:(id)a0;
- (double)heightForRow:(long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
