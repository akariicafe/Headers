@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) struct CGSize { double width; double height; } minimumLayoutSize;
@property (nonatomic) BOOL shouldFillAvailableSpace;
@property (nonatomic) long long sectionType;

- (int)separatorStyle;
- (Class)cellViewClass;
- (BOOL)isDraggable;
- (id)backgroundColor;
- (id)accessibilityIdentifier;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)isTappable;
- (BOOL)isFocusable;
- (Class)collectionViewCellClass;
- (id)description;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nextCard;
- (id)dragURL;
- (BOOL)hasLeadingImage;
- (BOOL)anyCardSectionsAreTappable:(id)a0;
- (BOOL)anyCardSectionsHaveNextCards:(id)a0;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)fallbackCardSectionForCompactResult;
- (id)horizontalRowModel;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (BOOL)isQuerySuggestion;
- (BOOL)prefersNoSeparatorAbove;
- (id)punchouts;
- (BOOL)supportsCustomUserReportRequestAfforance;

@end
