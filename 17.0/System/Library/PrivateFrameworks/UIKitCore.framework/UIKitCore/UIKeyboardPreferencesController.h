@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property long long compactAssistantBarPersistentLocation;
@property long long visceral;
@property BOOL enableProKeyboard;

+ (id)sharedPreferencesController;

- (void)synchronizePreferences;
- (void)forwardInvocation:(id)a0;
- (id)valueForPreferenceKey:(id)a0;
- (id)init;
- (BOOL)isPasswordAutoFillAllowed;
- (void)setValue:(id)a0 forKey:(int)a1;
- (void)dealloc;
- (void)setEnabledDictationLanguages:(id)a0;
- (BOOL)spaceConfirmationEnabled;
- (void)performedFirstReachableKeyboardInteraction;
- (BOOL)boolForKey:(int)a0;
- (void)saveInputModes:(id)a0;
- (void)setDictationAutoPunctuation:(BOOL)a0;
- (void)preferencesControllerChanged:(id)a0;
- (BOOL)defaultGlobeAsEmojiKeySetting;
- (BOOL)boolForPreferenceKey:(id)a0;
- (BOOL)useHardwareGlobeKeyAsEmojiKey;
- (double)rivenSizeFactor:(double)a0;
- (BOOL)allEnabledInputModesAreValid;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)keyboardLanguageIndicatorEnabled;
- (BOOL)isFirstReachableKeyboardInteraction;
- (void)touchSynchronizePreferencesTimer;
- (BOOL)currentInputModeSupportsCrescendo;
- (id)inputModeUpdateTime;
- (void)setLastUsedDictationLanguages:(id)a0;
- (void)_configurePreferences;
- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (BOOL)inputModeSupportsCrescendo:(id)a0;
- (id)valueForKey:(int)a0;
- (BOOL)crescendoEnabled;
- (void)setLanguageAwareInputModeLastUsed:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
