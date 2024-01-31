@class NSString, SHSDualSIMToneTitleView;

@interface SHSDualSIMToneController : SHSToneController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate>

@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) SHSDualSIMToneTitleView *titleView;
@property (nonatomic) BOOL isDefaultSIMLineController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)tonePickerViewController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)vibrationPickerViewController:(id)a0 selectedVibrationWithIdentifier:(id)a1;
- (id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)a0 topic:(id)a1;
- (void)_updateReloadSpecifierInParentController;

@end
