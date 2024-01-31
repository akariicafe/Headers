@class _UIFindNavigatorView, NSString, NSArray, UITextSearchOptions, UIResponder, UIFindSession;
@protocol _UIFindNavigatorViewControllerDelegate;

@interface _UIFindNavigatorViewController : UIInputViewController <_UIFindNavigatorViewDelegate, UIPredictiveViewController> {
    long long _assistantBarStyle;
    _UIFindNavigatorView *_findNavigatorView;
    NSArray *_extraKeyCommands;
    NSString *_lastSearchQuery;
    UITextSearchOptions *_lastSearchOptions;
    BOOL _performingReplacement;
}

@property (readonly, nonatomic) BOOL hostedInKeyboard;
@property (retain, nonatomic) UIFindSession *findSession;
@property (readonly, nonatomic) _UIFindNavigatorView *findNavigatorView;
@property (weak, nonatomic) id<_UIFindNavigatorViewControllerDelegate> findNavigatorViewControllerDelegate;
@property (weak, nonatomic) UIResponder *parentResponder;
@property (nonatomic) unsigned long long tintTechnique;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (void)setAssistantBarStyle:(long long)a0;
- (void)_didEnterReplacementString:(id)a0;
- (id)undoManager;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)find:(id)a0;
- (BOOL)_dismissesKeyboardOnReturn;
- (id)nextResponder;
- (void)_finishSearchingOnResignIfNecessary;
- (void)_handleHighlightPreviousResult:(id)a0;
- (void)_replaceFieldDidChange:(id)a0;
- (id)parentFocusEnvironment;
- (void)viewDidLoad;
- (void)_textViewDidChangeNotification:(id)a0;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)findNavigator:(id)a0 didChangeMode:(long long)a1;
- (void)_handleInsertNewline:(id)a0;
- (void)findNext:(id)a0;
- (void)findPrevious:(id)a0;
- (void)_handleDone:(id)a0;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)findNavigatorShouldShowReplacementOption:(id)a0;
- (void)loadView;
- (id)keyCommands;
- (void)viewWillMoveToWindow:(id)a0;
- (void)findNavigator:(id)a0 didInvokeReplaceReplacingAll:(BOOL)a1;
- (void)findAndReplace:(id)a0;
- (void)_recomputeConfiguredSearchOptions;
- (id)_configuredSearchOptions;
- (void)updateViewForActiveFindSession;
- (BOOL)_canShowWhileLocked;
- (BOOL)allowsCompactAssistantBar;
- (void).cxx_destruct;
- (void)_performSearchWithQuery:(id)a0 options:(id)a1;
- (void)_searchTextFieldChanged:(id)a0;
- (void)_updateResultsCount;
- (void)_updateReturnKeyType;
- (void)findNavigator:(id)a0 didInvokeNextResultInDirection:(long long)a1;
- (void)findNavigatorDidInvalidateSearchSession:(id)a0;
- (void)_handleSearchReturn:(id)a0;
- (void)_performAutoSearch;
- (void)resignFirstResponderAndFinishSearching;
- (void)_updateReplaceButtonEnabled;
- (void)_windowDidChangeToFirstResponder:(id)a0;
- (void)_didEnterSearchQuery:(id)a0;
- (double)preferredWidthForTraitCollection:(id)a0;

@end
