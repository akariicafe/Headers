@class NSString, SFSearchResult;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult;

- (Class)cellViewClass;
- (BOOL)isTappable;
- (Class)collectionViewCellClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifyingResult;
- (id)initWithSection:(id)a0 result:(id)a1 itemIdentifier:(id)a2;

@end
