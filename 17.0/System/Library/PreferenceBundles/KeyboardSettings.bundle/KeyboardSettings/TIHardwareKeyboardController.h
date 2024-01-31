@class KeyboardBrightnessClient;

@interface TIHardwareKeyboardController : PSListController {
    KeyboardBrightnessClient *_keyboardBrightnessClient;
}

+ (id)IOHIDKeyboardLanguageToCapsLockKeyLabel;

- (void)hardwareKeyboardAvailabilityChanged;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appWillEnterForeground:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (id)capsLockSwitchSpecifiersFromModes:(id)a0;
- (BOOL)defaultValueForGlobeAsEmojiKey;
- (id)getBrightness:(id)a0;
- (id)getCurrentKeyboardType;
- (id)globeAsEmojiSpecifiers;
- (id)globeKeyPreference:(id)a0;
- (BOOL)isTrackingBrightnessSlider;
- (id)keyboardBrightnessSpecifiers;
- (id)keyboardTypeRemapSpecifiers;
- (id)modifierRemapSpecifiers;
- (id)newSpecifiers;
- (id)readPreferenceControllerValue:(id)a0;
- (id)readRomanCapsLockPreferenceValue:(id)a0;
- (id)separateHWKeyboardSpecifiers;
- (void)setBrightness:(id)a0 specifier:(id)a1;
- (void)setPreferenceControllerValue:(id)a0 forSpecifier:(id)a1;
- (void)setRomanCapsLockPreferenceValue:(id)a0 forSpecifier:(id)a1;
- (BOOL)shouldShowGlobeKeyPreference;
- (void)suspendIdleDimming:(BOOL)a0;
- (void)toggledGlobeKey:(id)a0 specifier:(id)a1;

@end
