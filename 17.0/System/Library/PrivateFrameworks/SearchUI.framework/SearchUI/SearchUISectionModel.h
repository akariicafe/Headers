@class NSArray, SearchUISection, SFColor, SearchUIAsyncSectionLoader;

@interface SearchUISectionModel : NSObject

@property (nonatomic) BOOL drawPlattersIfNecessary;
@property (retain, nonatomic) NSArray *rowModels;
@property (readonly, nonatomic) SearchUISection *section;
@property (readonly, nonatomic) BOOL shouldHeightMatchSection;
@property (readonly, nonatomic) BOOL selfSizingInTwoAxes;
@property (readonly, nonatomic) BOOL needsHorizontalNavigation;
@property (readonly, nonatomic) SFColor *backgroundColor;
@property (readonly, nonatomic) SearchUIAsyncSectionLoader *asyncLoader;

+ (long long)sectionType;
+ (id)sectionModelWithGridRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2 expandedCollectionSections:(id)a3;
+ (id)sectionModelWithRows:(id)a0 drawPlattersIfNecessary:(BOOL)a1 section:(id)a2 expandedCollectionSections:(id)a3;
+ (id)sectionModelWithScrollingRowModels:(id)a0 numberOfRows:(long long)a1 section:(id)a2;

- (unsigned long long)hash;
- (void)removeRowModelAtIndex:(long long)a0;
- (id)initWithRowModels:(id)a0 section:(id)a1;
- (BOOL)shouldLeaveSpaceForChevronForIndex:(unsigned long long)a0;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void)reloadCornerMaskingOverrideWithAttributes:(id)a0;
- (int)separatorStyleForIndex:(unsigned long long)a0;
- (id)description;
- (void)prepareForSnapshot;
- (int)separatorStyleForIndex:(unsigned long long)a0 shouldDrawTopAndBottomSeparators:(BOOL)a1;
- (id)overriddenAccessibilityIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)wantsHeaderSeparator;
- (BOOL)shouldDisplayChevronForIndex:(unsigned long long)a0 nextCardsEnabled:(BOOL)a1;

@end
