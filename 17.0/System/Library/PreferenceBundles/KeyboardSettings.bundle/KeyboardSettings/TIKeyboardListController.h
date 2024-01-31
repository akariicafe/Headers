@class NSString, TIAboutKeyboardPrivacyController, PSSpecifier, NSMutableArray;

@interface TIKeyboardListController : PSListController <TIInputModeAssetStatusManagerListener> {
    BOOL _emojiEnabled;
    PSSpecifier *_groupSeparator;
    PSSpecifier *_addNewInputModeSpecifier;
    unsigned long long _totalKeyboardsCount;
    unsigned long long _numberOfEnabledKeyboards;
    BOOL deletingRow;
}

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (readonly, nonatomic) NSMutableArray *keyboardsArray;
@property (nonatomic) BOOL newKeyboardsAdded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)count;
+ (id)inputModes;
+ (id)availableInputModesForLanguage:(id)a0;
+ (id)supportedInputModesForLanguage:(id)a0;
+ (id)attributedStringForSymbolName:(id)a0;
+ (id)attributedTitleForSymbolName:(id)a0 cellTitle:(id)a1;
+ (id)availableSoftwareLayoutsForBaseInputMode:(id)a0;
+ (id)displayNameForHardwareLayout:(id)a0 inputMode:(id)a1;
+ (id)keyboardDisplayNameForIdentifier:(id)a0;
+ (void)setInputModes:(id)a0;
+ (id)softwareLayoutsForBaseInputMode:(id)a0;
+ (id)supportedBaseInputModesForLanguage:(id)a0;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (Class)tableViewClass;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadSpecifiers;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)manager:(id)a0 didUpdateStatus:(long long)a1 forInputMode:(id)a2;
- (id)specifierForExtensionInputMode:(id)a0;
- (void)_writeKeyboards;
- (void)addNewKeyboards:(id)a0;
- (BOOL)allKeyboardsEnabled;
- (void)removeInputModeWithIdentifier:(id)a0;
- (id)specifierForInputMode:(id)a0;
- (void)updateEditButtonState;

@end
