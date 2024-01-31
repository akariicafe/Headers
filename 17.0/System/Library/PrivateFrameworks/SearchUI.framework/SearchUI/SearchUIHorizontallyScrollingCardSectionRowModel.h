@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (id)cardSection;
- (Class)cellViewClass;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLeadingImage;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3 builder:(id)a4;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1 builder:(id)a2;

@end
