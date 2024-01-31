@class RMUIPasscodeViewModel;

@interface RMPasscodeViewController : PSListController

@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeModel;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (id)_passcodeDetailValue:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForPasscodeSettings;

@end
