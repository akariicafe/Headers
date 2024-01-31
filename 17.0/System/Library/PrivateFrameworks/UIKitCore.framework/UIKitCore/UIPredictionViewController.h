@class NSString, NSArray, NSTimer, TUIPredictionView, NSDate, TIAutocorrectionList;

@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
}

@property (retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList;
@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (BOOL)hidesExpandableButton;
- (void)_registerForNotifications;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)predictionView:(id)a0 didSelectCandidate:(id)a1;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)a0;
- (id)_currentTextSuggestions;
- (void)_registerAsAutocorrectionObserver;
- (void)autocorrectionControllerDidClearAutocorrections:(id)a0;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;
- (void)loadView;
- (void)_inputResponderDidChangeNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)autocorrectionController:(id)a0 didUpdateAutocorrectionList:(id)a1;
- (void).cxx_destruct;
- (void)_updateAutocorrectionList:(id)a0;
- (void)_clearTextSuggestions;
- (BOOL)_autocorrectionListContainsContinuousPathConversions:(id)a0;
- (void)_inputModeDidChange;
- (BOOL)requiresKeyboard;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)a0;

@end
