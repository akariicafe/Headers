@class NSSet, NSMutableSet;

@interface SearchUIDataSourceSnapshotBuilder : NSObject

@property (retain, nonatomic) NSSet *expandedSections;
@property (retain, nonatomic) NSSet *expandedCollectionSections;
@property (retain, nonatomic) NSMutableSet *rowModelIdentifiers;
@property (retain, nonatomic) NSMutableSet *sectionModelIdentifiers;

- (id)init;
- (id)initWithSnapshot:(id)a0;
- (BOOL)resultHasHorizontallyGroupedCardSections:(id)a0;
- (void).cxx_destruct;
- (id)asyncRowManagersForCardSections:(id)a0;
- (id)buildCombinedRowModelsFromRowModels:(id)a0 result:(id)a1;
- (id)buildRowModelFromCardSection:(id)a0 result:(id)a1;
- (id)buildRowModelsFromCardSections:(id)a0 result:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)buildRowModelsFromResult:(id)a0;
- (id)buildRowModelsFromResultSections:(id)a0 queryId:(unsigned long long)a1;
- (id)buildRowModelsFromSectionModels:(id)a0;
- (id)buildSectionFromRowModels:(id)a0 section:(id)a1;
- (id)buildSectionsFromCardSections:(id)a0 result:(id)a1 usesInlineStyle:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)buildSectionsFromResultSections:(id)a0 queryId:(unsigned long long)a1;
- (id)buildSectionsFromRowModels:(id)a0 fromSection:(id)a1;
- (id)buildSectionsFromRowModels:(id)a0 fromSections:(id)a1;
- (id)buildSnapshotForSectionModels:(id)a0;
- (id)buildSnapshotFromResultSections:(id)a0 queryId:(unsigned long long)a1;
- (id)buildSnapshotFromTableModel:(id)a0;
- (id)buildUISectionFromResultSection:(id)a0 collectionSection:(id)a1;
- (id)generateComposedItemIdentifierForResults:(id)a0;
- (id)generateItemIdentifier:(id)a0 cardSection:(id)a1;
- (id)generateIterativeIdentifierForBaseIdentifier:(id)a0 withUnavailableIdentifiers:(id)a1;
- (id)generateSectionIdentifier:(id)a0 collectionSection:(id)a1;
- (id)gridLayoutsForCardSections:(id)a0;
- (id)initWithExpandedSections:(id)a0 expandedCollectionSections:(id)a1;
- (id)initWithExpandedSections:(id)a0 expandedCollectionSections:(id)a1 rowModelIdentifiers:(id)a2 sectionModelIdentifiers:(id)a3;
- (id)resultsForMultiResultRowInSection:(id)a0 startingAtIndex:(unsigned long long)a1;

@end
