@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;
@property (readonly) NSArray *snippetUICardSections;

- (int)separatorStyle;
- (id)cardSection;
- (Class)cellViewClass;
- (BOOL)isDraggable;
- (id)backgroundColor;
- (BOOL)isTappable;
- (Class)collectionViewCellClass;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nextCard;
- (void)setIsTopHit:(BOOL)a0;
- (id)dragURL;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 dataSourceIdentifier:(id)a2;
- (id)punchouts;

@end
