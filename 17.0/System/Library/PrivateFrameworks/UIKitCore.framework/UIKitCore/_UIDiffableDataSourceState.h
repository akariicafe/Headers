@class NSUUID, NSOrderedSet, NSString;
@protocol _UIDataSourceSnapshotTranslating;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {
    NSUUID *_generationID;
    id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    NSOrderedSet *_guaranteedPerformanceIdentifiers;
    NSOrderedSet *_guaranteedPerformanceSections;
    unsigned long long _identifierLookupCount;
    unsigned long long _sectionLookupCount;
}

@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (readonly, nonatomic) NSOrderedSet *guaranteedPerformanceIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *guaranteedPerformanceSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathForItemIdentifier:(id)a0;
- (void)validateIdentifiers;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)init;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)initWithStateAdvancingGenerationID:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3;
- (void)willBecomeWiredToDataSource;
- (long long)numberOfItemsInSection:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3 identifiersHaveGuaranteedPerformance:(BOOL)a4 sectionsHaveGuaranteedPerformance:(BOOL)a5;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithState:(id)a0;
- (id)itemIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (BOOL)containsSectionIdentifier:(id)a0;
- (BOOL)containsItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)sectionIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;

@end
