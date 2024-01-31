@class NSArray, UICollectionViewDiffableDataSource, NSDictionary, MRUMediaSuggestionsView, MRUVisualStylingProvider, NSString;
@protocol MRUMediaSuggestionsViewControllerDelegate;

@interface MRUMediaSuggestionsViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) MRUMediaSuggestionsView *view;
@property (retain, nonatomic) MRUMediaSuggestionsView *viewIfLoaded;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *suggestions;
@property (retain, nonatomic) NSArray *mediaSuggestions;
@property (weak, nonatomic) id<MRUMediaSuggestionsViewControllerDelegate> delegate;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)loadView;
- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithMediaSuggestions:(id)a0;
- (void)updateSuggestionsAnimated:(BOOL)a0;

@end
