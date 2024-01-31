@class NSString, UISystemInputAssistantViewController, UIKeyboard, UIInputViewController, UIView, UIKeyboardAutocorrectionController;
@protocol UIKeyInput;

@interface UIKeyboardViewController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long serviceRole;
@property (retain, nonatomic) UIKeyboard *keyboard;
@property (retain, nonatomic) UIInputViewController *inputViewController;
@property (retain, nonatomic) UISystemInputAssistantViewController *systemInputAssistantViewController;
@property (retain, nonatomic) UIView<UIKeyInput> *textInputView;
@property (readonly, weak, nonatomic) UIView *pathEffectView;
@property (readonly, nonatomic) UIView *inputAssistantView;
@property (readonly, nonatomic) UIKeyboardAutocorrectionController *autocorrectionController;
@property (nonatomic) BOOL shouldUpdateLayoutAutomatically;
@property (nonatomic) BOOL resizable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_verifyClient;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didSelectPredictiveCandidate:(id)a0;
- (id)initWithServiceRole:(unsigned long long)a0;
- (void)registerProxyKeysWithViews:(id)a0;
- (void)shouldAcceptAutocorrection;

@end
