@class NSString, SBSStatusBarStyleOverridesAssertion, HUILiveListenLevelIndicator, CCUILabeledRoundButtonViewController, HACCLiveListenLevelGroup;

@interface HACCLiveListenButton : HUICCCapsuleButton

@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic) BOOL isListening;
@property (nonatomic) BOOL isLiveListenAvailable;
@property (retain, nonatomic) HUILiveListenLevelIndicator *levelIndicator;
@property (nonatomic) long long liveListenState;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *buttonVC;
@property (retain, nonatomic) NSString *axHintStr;
@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;

- (unsigned long long)accessibilityTraits;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (id)accessoryView;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)updateUI;
- (void)updateValue;
- (void)_updateButtonView;
- (id)contentValue;
- (void)liveListenAudioLevelDidChange:(double)a0;
- (void)updateStatusBarOverride;
- (void)updateUILiveListenRemote;

@end
