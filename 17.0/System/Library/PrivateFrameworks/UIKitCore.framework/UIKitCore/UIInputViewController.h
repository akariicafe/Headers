@class NSString, UIKeyboard, UIInputView;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    double _touchBegan;
}

@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard;
@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard;
@property (retain, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) id<UITextDocumentProxy> textDocumentProxy;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) BOOL hasDictationKey;
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (void)_setupInputController;
- (void)dealloc;
- (void)proceedShouldReturnIfPossibleForASP;
- (id)_extensionContext;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)a0;
- (void)dismissKeyboard;
- (void)_didResetDocumentState;
- (void)selectionWillChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canResignIfContainsFirstResponder;
- (void)handleInputModeListFromView:(id)a0 withEvent:(id)a1;
- (void)_updateConformanceCache;
- (void)_setExtensionContextUUID:(id)a0;
- (void)loadView;
- (id)_textDocumentInterface;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)advanceToNextInputMode;
- (void)selectionDidChange:(id)a0;
- (void)didReceiveMemoryWarning;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)returnToPreviousInputMode;
- (BOOL)_usesCustomBackground;
- (BOOL)_canBecomeFirstResponder;
- (void)_setTextDocumentProxy:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)textWillChange:(id)a0;
- (id)_proxyInterface;
- (id)_compatibilityController;
- (void)setView:(id)a0;
- (void)_willResetDocumentState;
- (id)initWithCoder:(id)a0;
- (void)set_autosizeToCurrentKeyboard:(BOOL)a0;
- (void)textDidChange:(id)a0;

@end
