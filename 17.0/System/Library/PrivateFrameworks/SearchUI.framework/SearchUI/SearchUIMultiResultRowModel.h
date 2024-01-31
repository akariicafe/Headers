@class NSArray;

@interface SearchUIMultiResultRowModel : SearchUIRowModel

@property (retain) NSArray *multiResults;

- (int)separatorStyle;
- (Class)cellViewClass;
- (BOOL)isDraggable;
- (id)accessibilityIdentifier;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)isTappable;
- (BOOL)isFocusable;
- (Class)collectionViewCellClass;
- (id)results;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1;
- (long long)removeResult:(id)a0;
- (id)dragAppBundleID;
- (void).cxx_destruct;

@end
