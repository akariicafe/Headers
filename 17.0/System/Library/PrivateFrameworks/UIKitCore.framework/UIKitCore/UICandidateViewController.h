@class NSArray, NSString, UIView;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *candidateView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredCandidateBarHeightForTraitCollection:(id)a0;

- (BOOL)hidesExpandableButton;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)requiresKeyboard;

@end
