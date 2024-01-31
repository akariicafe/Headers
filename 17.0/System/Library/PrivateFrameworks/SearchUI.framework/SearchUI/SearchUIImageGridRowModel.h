@class NSArray;

@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel

@property (retain) NSArray *cardSectionRowModels;

- (id)cardSection;
- (BOOL)isTappable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)cardSectionViewClass;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4 builder:(id)a5;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1 builder:(id)a2;

@end
