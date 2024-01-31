@class NSString, UITextField, SFCard, SearchUITableModel;
@protocol SearchUICommandDelegate, SearchUIResultsViewDelegate, SFFeedbackListener, SearchUISizingDelegate, SearchUICardViewDelegate;

@interface SearchUICardCollectionViewController : SearchUICollectionViewController <SearchUICardTableBridgingProtocol, SearchUIViewTesting>

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak) id<SearchUISizingDelegate> sizingDelegate;
@property (weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (weak, nonatomic) UITextField *textField;
@property (readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;
@property (copy, nonatomic) id /* block */ viewWillUpdateHandler;
@property (copy, nonatomic) id /* block */ viewDidUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView;
- (id)init;
- (void)updateTopPadding;
- (void).cxx_destruct;
- (Class)restorationContextClass;
- (id)scrollViewForSizing;
- (id)cellForRowModel:(id)a0 atIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)reloadViews;

@end
