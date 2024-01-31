@interface AXOnboardingObjCBridge : NSObject

@property (nonatomic) BOOL _isListening;

+ (id)sharedInstance;

- (BOOL)heySiriEnabled;
- (BOOL)voiceControlEnabled;
- (id)_keyboardNotificationsToObserve;
- (void)_adjustForKeyboard;
- (void)_listenForKeyboardNotifications:(BOOL)a0;
- (id)_setupKeyboardNotificationsIfNecessary;
- (void)disableSoftwareKeyboard;
- (void)enableSoftwareKeyboard;
- (void)enableVoiceControl:(BOOL)a0;
- (id)localizedVoiceControlCommand:(id)a0;
- (void)toggleVoiceControl;

@end
