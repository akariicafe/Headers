@class NSArray, NSString;

@interface UIPlaceholderPredictiveViewController : UIViewController <UIPredictiveViewController>

@property (nonatomic) BOOL showsRemoteInputDashViewController;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidesExpandableButton;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (id)_currentTextSuggestions;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)requiresKeyboard;

@end
