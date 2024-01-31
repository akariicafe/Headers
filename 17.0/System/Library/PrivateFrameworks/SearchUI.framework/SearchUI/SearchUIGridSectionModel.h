@interface SearchUIGridSectionModel : SearchUISectionModel

@property (nonatomic) unsigned long long numberOfColumns;

+ (long long)sectionType;

- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (BOOL)needsHorizontalNavigation;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)a0;
- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)wantsHeaderSeparator;

@end
