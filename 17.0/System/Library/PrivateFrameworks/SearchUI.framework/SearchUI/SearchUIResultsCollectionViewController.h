@class UIControl, NSArray, NSString, NSMutableSet, UIView, SearchUITableModel;
@protocol UITextInput, SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUIKeyboardableTableViewDelegate;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUIResultsTableBridgingProtocol>

@property (nonatomic) double cachedHeaderHeight;
@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSArray *hiddenSections;
@property (readonly, nonatomic) double headerHeight;
@property (weak) id<SearchUISizingDelegate> sizingDelegate;
@property (weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak) UIControl<UITextInput> *textField;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ viewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ viewDidUpdateHandler;

+ (id)hiddenSectionsFromSections:(id)a0;

- (void)highlightRowAtIndexPath:(id)a0;
- (id)commandEnvironment;
- (void)didToggleExpansion;
- (long long)_focusItemDeferralMode;
- (id)majorScrollView;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void)toggleExpansionForSectionModel:(id)a0;
- (void)setFocusableIndexPath:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (void)returnKeyPressed;
- (id)preferredFocusEnvironments;
- (void)replaceResult:(id)a0 withResult:(id)a1;
- (void)restoreResultsIfNeeded;
- (BOOL)indexPathIsShowMoreSections:(id)a0;
- (void)willDismiss;
- (BOOL)sectionShouldBeExpanded:(id)a0;
- (void)highlightResult:(id)a0;
- (id)tableModelForExpansion;
- (void)didPresentToResumeSearch:(BOOL)a0;
- (void)expandCellsIfNeeded;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1;
- (void)updateWithResultSections:(id)a0 scrollToTop:(BOOL)a1 animated:(BOOL)a2;
- (void)scrollTableToTop;
- (void).cxx_destruct;
- (BOOL)updateMustAccountForLayout;
- (void)showMoreSectionsWithShowMoreButtonIndexPath:(id)a0;
- (void)purgeAndResetTable;
- (id)cellForRowModel:(id)a0 atIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)resignTextFieldIfNeeded;

@end
