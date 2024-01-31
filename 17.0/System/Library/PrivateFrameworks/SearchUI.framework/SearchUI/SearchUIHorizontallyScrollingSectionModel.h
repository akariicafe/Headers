@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

+ (long long)sectionType;

- (BOOL)drawsBackground;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;
- (BOOL)needsHorizontalNavigation;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (BOOL)selfSizingInTwoAxes;
- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)wantsHeaderSeparator;
- (BOOL)shouldHeightMatchSection;

@end
