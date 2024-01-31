@class STSSearchModel, NSString;
@protocol STSSearchModelUpdateDelegate, STSSuggestionSelectionDelegate;

@interface SuggestionsDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, PopUpDataSource, PopUpDelegate>

@property (retain, nonatomic) STSSearchModel *searchModel;
@property BOOL isScrolling;
@property (weak, nonatomic) id<STSSearchModelUpdateDelegate> updateDelgate;
@property (weak, nonatomic) id<STSSuggestionSelectionDelegate> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfRows;
- (void)clearSuggestions;
- (void).cxx_destruct;
- (id)initWithSearchModel:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (id)headerTitleForRow:(long long)a0;
- (BOOL)isGroupRow:(long long)a0;
- (BOOL)rowHasClearButton:(long long)a0;
- (id)stringValueForRowAtIndex:(long long)a0;
- (void)updateQuerySuggestions:(id)a0;

@end
