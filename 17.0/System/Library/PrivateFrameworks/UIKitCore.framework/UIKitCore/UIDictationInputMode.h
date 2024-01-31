@class UITouch, UIKeyboardInputMode, NSMutableDictionary;

@interface UIDictationInputMode : UISpecializedInputMode {
    NSMutableDictionary *_cachedIcons;
}

@property (retain, nonatomic) UITouch *triggeringTouch;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic) BOOL usingTypeAndTalk;
@property (nonatomic) BOOL isCurrentDictationLanguageOnDevice;

+ (BOOL)currentInputModeSupportsDictation;

- (BOOL)includeBarHeight;
- (void).cxx_destruct;
- (Class)viewControllerClass;
- (BOOL)showSWLayoutWithHWKeyboard;
- (id)indicatorIconForDictationLanguage:(id)a0 scaleFactor:(double)a1;

@end
