@protocol PXDisplaySuggestionFetchResult;

@interface PXSuggestionsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) id<PXDisplaySuggestionFetchResult> suggestions;

- (id)init;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithSuggestionsFetchResult:(id)a0;

@end
