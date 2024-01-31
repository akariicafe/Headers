@class TKVibrationPickerViewController, NSString, TKTonePickerViewController;

@interface SHSToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate>

@property (retain, nonatomic) TKTonePickerViewController *tonePickerViewController;
@property (retain, nonatomic) TKVibrationPickerViewController *vibrationPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)tonePickerViewController:(id)a0 didDismissVibrationPickerViewController:(id)a1;
- (void)tonePickerViewController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)tonePickerViewController:(id)a0 willPresentVibrationPickerViewController:(id)a1;
- (void)vibrationPickerViewController:(id)a0 selectedVibrationWithIdentifier:(id)a1;
- (void)_handleAlertOverridePolicyDidChangeNotification:(id)a0;
- (id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)a0 topic:(id)a1;
- (id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)a0 topic:(id)a1;
- (void)_insertTonePickerView;
- (void)_updateReloadSpecifierInParentController;

@end
