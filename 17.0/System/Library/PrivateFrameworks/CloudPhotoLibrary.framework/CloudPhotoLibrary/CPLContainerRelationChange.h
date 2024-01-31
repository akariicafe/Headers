@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange

@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) CPLContainerRelation *relation;

+ (BOOL)supportsDeletion;
+ (BOOL)supportsDirectDeletion;
+ (Class)relatedRecordClass;
+ (id)relationToContainerWithIdentifier:(id)a0;
+ (id)relationWithItemIdentifier:(id)a0 containerIdentifier:(id)a1;
+ (id)relationWithItemScopedIdentifier:(id)a0 containerIdentifier:(id)a1;
+ (BOOL)shouldReallyQuarantineRecord;

- (id)description;
- (void).cxx_destruct;
- (id)secondaryIdentifier;
- (id)itemScopedIdentifier;
- (id)compactedChangeWithRelatedChanges:(id)a0 isOnlyChange:(BOOL)a1 fullRecord:(id)a2 usingStorageView:(id)a3;
- (id)containerScopedIdentifier;
- (id)relatedIdentifier;
- (id)scopedIdentifiersForMapping;
- (void)setContainerScopedIdentifier:(id)a0;
- (void)setItemScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (void)setSecondaryIdentifier:(id)a0;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (BOOL)validateFullRecord;

@end
