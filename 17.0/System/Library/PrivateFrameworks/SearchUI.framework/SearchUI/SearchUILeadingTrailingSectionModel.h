@class NSArray, SFLeadingTrailingCardSection;

@interface SearchUILeadingTrailingSectionModel : SearchUISectionModel

@property (retain, nonatomic) SFLeadingTrailingCardSection *cardSection;
@property (retain, nonatomic) NSArray *leadingRowModels;
@property (retain, nonatomic) NSArray *trailingRowModels;
@property (nonatomic) double horizontalSpacing;
@property (nonatomic) double verticalSpacing;
@property (nonatomic) double leadingFractionalWidth;
@property (nonatomic) double preferredHeight;
@property (nonatomic) BOOL prefersSeparatorsInLeadingGroup;
@property (nonatomic) BOOL prefersSeparatorsInTrailingGroup;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } leadingGroupContentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } trailingGroupContentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionInsets;

+ (long long)sectionType;

- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)overriddenAccessibilityIdentifier;
- (void).cxx_destruct;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (id)rowModels;
- (id)buildGroupForFractionalWidth:(double)a0 numberOfCards:(long long)a1 isTopAligned:(BOOL)a2 prefersSeparator:(BOOL)a3;
- (id)initWithCardSection:(id)a0 rowModels:(id)a1 result:(id)a2 queryId:(unsigned long long)a3 section:(id)a4;
- (id)primaryCardSection;
- (BOOL)primaryCardSectionIsLeading;
- (id)rowModelsForCardSections:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0 forRowModel:(id)a1;

@end
