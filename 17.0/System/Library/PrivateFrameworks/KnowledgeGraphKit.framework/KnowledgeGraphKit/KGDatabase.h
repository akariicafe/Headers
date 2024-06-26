@class NSUUID, KGDatabaseNameCache, NSURL, KGGraphLockFile;

@interface KGDatabase : NSObject {
    void *_database;
    KGDatabaseNameCache *_nameCache;
    KGGraphLockFile *_lockFile;
}

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly, nonatomic) unsigned long long databaseStatus;

+ (void)initialize;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)emptyDatabaseExistsAtURL:(id)a0 error:(id *)a1;
+ (void)deleteClosedDatabaseFilesAtStoreURL:(id)a0;

- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void)close;
- (void)enumerateTombstoneEdgesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (void *)database;
- (id)filterEdgeIdentifiersBetween:(id)a0 targetNodeIdentifiers:(id)a1 filterEdgeIdentifiers:(id)a2 error:(id *)a3;
- (id)tombstoneNodeIdentifiersForPropertyName:(id)a0 values:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0;
- (id)edgeLabels;
- (id)tombstoneEdgeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 error:(id *)a4;
- (id)filterTombstoneEdgeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 edgeIdentifiers:(id)a3 error:(id *)a4;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })tombstoneEdgeAttributeValueCursorWithIdentifiers:(id)a0;
- (void)dealloc;
- (void)enumerateEdgesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)propertyValueForCursor:(void *)a0;
- (void)_enumerateNodeTableWithNodeCursor:(void *)a0 block:(id /* block */)a1;
- (id)unionOfNodesForNodeTable:(const void *)a0 withLabels:(id)a1 filterNodeIdentifiers:(id)a2 error:(id *)a3;
- (id)edgeIdentifiersWithLabels:(id)a0 direction:(unsigned long long)a1 forNodeIdentifier:(unsigned long long)a2 error:(id *)a3;
- (id)nodeIdentifiersWhereNoInEdgesWithError:(id *)a0;
- (id)filterEdgeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 edgeIdentifiers:(id)a3 error:(id *)a4;
- (id)intersectionOfNodesWithLabels:(id)a0 error:(id *)a1;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasPredicateFromKGFilter:(id)a0 elementType:(int)a1;
- (struct Bitmap { unsigned long long x0; unsigned long long x1; struct vector<degas::BitsetPtr, std::allocator<degas::BitsetPtr>> { struct BitsetPtr *x0; struct BitsetPtr *x1; struct __compressed_pair<degas::BitsetPtr *, std::allocator<degas::BitsetPtr>> { struct BitsetPtr *x0; } x2; } x2; BOOL x3; })upsertLabels:(id)a0;
- (id)allNodeIdentifiersOfEdgesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)intersectionOfNodesForNodeTable:(const void *)a0 withLabels:(id)a1 filterNodeIdentifiers:(id)a2 error:(id *)a3;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasPredicateForAnyLabels:(void *)a0 elementType:(int)a1;
- (void)enumeratePropertyValuesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 withBlock:(id /* block */)a2;
- (id)allNodesForTable:(const void *)a0 error:(id *)a1;
- (BOOL)setNodeProperties:(id)a0 forIdentifier:(unsigned long long)a1 error:(id *)a2;
- (id)nodeIdentifiersWhereNoEdgesWithError:(id *)a0;
- (void)enumerateSourceAndTargetIdentifiersWithEdgeIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)allEdgesForEdgeTable:(const void *)a0 withError:(id *)a1;
- (id)elementIdentifiersForPropertyName:(id)a0 values:(id)a1 valueTable:(const void *)a2 rowCount:(unsigned long long)a3 error:(id *)a4;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (int)degasEdgeDirectionFromKG:(unsigned long long)a0;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasPredicateForAllLabels:(void *)a0 elementType:(int)a1;
- (id)tombstoneNodeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 error:(id *)a3;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })tombstoneNodeAttributeValueCursorWithIdentifiers:(id)a0;
- (void)_enumerateNodesWithNodeCursor:(void *)a0 propertiesCursor:(void *)a1 block:(id /* block */)a2;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (id)unionOfEdgesForEdgeTable:(const void *)a0 withLabels:(id)a1 filterEdgeIdentifiers:(id)a2 error:(id *)a3;
- (id)tombstoneEdgeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 error:(id *)a3;
- (id)filterTombstoneEdgeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 edgeIdentifiers:(id)a4 error:(id *)a5;
- (id)intersectionOfNodesWithLabels:(id)a0 filterNodeIdentifiers:(id)a1 error:(id *)a2;
- (id)intersectionOfEdgesWithLabels:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (id)neighborNodesOfNodesForIdentifiers:(id)a0 throughEdgesWithLabels:(id)a1 direction:(unsigned long long)a2 error:(id *)a3;
- (id)propertyNameForAttrIdentifier:(unsigned long long)a0;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })edgeAttributeValueCursorWithIdentifiers:(id)a0 propertyName:(id)a1;
- (id)unionOfNodesWithLabels:(id)a0 error:(id *)a1;
- (BOOL)noFatalError;
- (struct EdgeCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })edgeCursorWithIdentifiers:(id)a0;
- (id)outEdgeIdentifiersOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)nodeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 error:(id *)a3;
- (unsigned long long)addNodeWithLabels:(id)a0 properties:(id)a1 error:(id *)a2;
- (id)unionOfTombstoneEdgesWithLabels:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (id)elementIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 valueTable:(const void *)a4 rowCount:(unsigned long long)a5 error:(id *)a6;
- (unsigned long long)upsertLabel:(id)a0;
- (unsigned long long)attributeIdentifierForPropertyName:(id)a0;
- (id)nodeIdentifiersSortedByPropertyForName:(id)a0 dataType:(long long)a1 ascending:(BOOL)a2 limit:(long long)a3 nodeIdentifiers:(id)a4 error:(id *)a5;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasPredicateFromValue:(id)a0 comparator:(unsigned long long)a1 attrId:(unsigned long long)a2 elementType:(int)a3;
- (id)filterNodeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 nodeIdentifiers:(id)a3 error:(id *)a4;
- (id)unionOfTombstoneNodesWithLabels:(id)a0 filterNodeIdentifiers:(id)a1 error:(id *)a2;
- (id)intersectionOfTombstoneNodesWithLabels:(id)a0 filterNodeIdentifiers:(id)a1 error:(id *)a2;
- (id)allTombstoneEdgesWithError:(id *)a0;
- (id)unionOfNodesWithLabels:(id)a0 filterNodeIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)setEdgeProperties:(id)a0 forIdentifier:(unsigned long long)a1 error:(id *)a2;
- (id)intersectionOfEdgesForEdgeTable:(const void *)a0 withLabels:(id)a1 filterEdgeIdentifiers:(id)a2 error:(id *)a3;
- (id)nodeIdentifiersWhereNoOutEdgesWithError:(id *)a0;
- (struct EdgeCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })tombstoneEdgeCursorWithIdentifiers:(id)a0;
- (id)intersectionOfTombstoneNodesWithLabels:(id)a0 error:(id *)a1;
- (id)tombstoneEdgeIdentifiersForPropertyName:(id)a0 values:(id)a1 error:(id *)a2;
- (id)filterTombstoneNodeIdentifiersForPropertyName:(id)a0 values:(id)a1 nodeIdentifiers:(id)a2 error:(id *)a3;
- (id)edgeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 error:(id *)a3;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)filterEdgeIdentifiersForPropertyName:(id)a0 values:(id)a1 edgeIdentifiers:(id)a2 error:(id *)a3;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeEdge:(unsigned long long)a0 error:(id *)a1;
- (void)_enumerateEdgeTableWithEdgeCursor:(void *)a0 block:(id /* block */)a1;
- (id)allTombstoneNodesWithError:(id *)a0;
- (id)filterElementIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 elementIdentifiers:(id)a3 valueTable:(const void *)a4 rowCount:(unsigned long long)a5 error:(id *)a6;
- (id)filterEdgeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 edgeIdentifiers:(id)a4 error:(id *)a5;
- (id)intersectionOfTombstoneEdgesWithLabels:(id)a0 error:(id *)a1;
- (id)filterInEdgeIdentifiersOfNodesWithIdentifiers:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (id)intersectionOfTombstoneEdgesWithLabels:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (id)filterTombstoneEdgeIdentifiersForPropertyName:(id)a0 values:(id)a1 edgeIdentifiers:(id)a2 error:(id *)a3;
- (id)tombstoneNodeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 error:(id *)a4;
- (id)edgeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 error:(id *)a4;
- (void)enumerateTombstoneNodesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (void)_enumeratePropertiesWithCursor:(void *)a0 withBlock:(id /* block */)a1;
- (id)unionOfTombstoneNodesWithLabels:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })nodeAttributeValueCursorWithIdentifiers:(id)a0 propertyName:(id)a1;
- (void)enumerateNodesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (void)enumeratePropertyValuesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 withBlock:(id /* block */)a2;
- (id)openModeDescription:(unsigned long long)a0;
- (id)filterElementIdentifiersForPropertyName:(id)a0 values:(id)a1 elementIdentifiers:(id)a2 valueTable:(const void *)a3 rowCount:(unsigned long long)a4 error:(id *)a5;
- (id)nodeLabels;
- (unsigned long long)insertNewLabel:(id)a0;
- (struct NodeCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })tombstoneNodeCursorWithIdentifiers:(id)a0;
- (BOOL)removeNode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeEdges:(id)a0 error:(id *)a1;
- (id)neighborNodesOfNodesForIdentifiers:(id)a0 throughEdgesForIdentifiers:(id)a1 direction:(unsigned long long)a2 error:(id *)a3;
- (id)filterOutEdgeIdentifiersOfNodesWithIdentifiers:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (void)_enumeratePropertiesForCursor:(void *)a0 block:(id /* block */)a1;
- (id)edgeIdentifiersSortedByPropertyForName:(id)a0 dataType:(long long)a1 ascending:(BOOL)a2 limit:(long long)a3 edgeIdentifiers:(id)a4 error:(id *)a5;
- (void)distributeValuesByType:(id)a0 toIntegerValues:(id)a1 floatValues:(id)a2 stringValues:(id)a3;
- (BOOL)removeNodes:(id)a0 error:(id *)a1;
- (BOOL)beginTransactionWithError:(id *)a0;
- (id)nodeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 error:(id *)a4;
- (id)filterNodeIdentifiersForPropertyName:(id)a0 values:(id)a1 nodeIdentifiers:(id)a2 error:(id *)a3;
- (id)labelsOfNodesForIdentifiers:(id)a0;
- (id)filterElementIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 elementIdentifiers:(id)a4 valueTable:(const void *)a5 rowCount:(unsigned long long)a6 error:(id *)a7;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (id)unionOfEdgesWithLabels:(id)a0 error:(id *)a1;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)labelsOfEdgesForIdentifiers:(id)a0;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasPredicateFromValueArray:(id)a0 attrId:(unsigned long long)a1 elementType:(int)a2;
- (id)nodeIdentifiersForPropertyName:(id)a0 values:(id)a1 error:(id *)a2;
- (id)elementIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 valueTable:(const void *)a3 rowCount:(unsigned long long)a4 error:(id *)a5;
- (void)setFatalError:(id)a0;
- (BOOL)appendNodeIdentifiersOfEdgesWithIdentifiers:(id)a0 sourceNodeIdentifiers:(id)a1 targetNodeIdentifiers:(id)a2 error:(id *)a3;
- (id)filterNodeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 nodeIdentifiers:(id)a4 error:(id *)a5;
- (id)filterTombstoneNodeIdentifiersForPropertyName:(id)a0 value:(id)a1 comparator:(unsigned long long)a2 nodeIdentifiers:(id)a3 error:(id *)a4;
- (id)unionOfTombstoneEdgesWithLabels:(id)a0 error:(id *)a1;
- (id)allNodesWithError:(id *)a0;
- (id)intersectionOfEdgesWithLabels:(id)a0 error:(id *)a1;
- (id)filterTombstoneNodeIdentifiersForPropertyName:(id)a0 rangeValue1:(id)a1 rangeValue2:(id)a2 comparator:(unsigned long long)a3 nodeIdentifiers:(id)a4 error:(id *)a5;
- (id)unionOfEdgesWithLabels:(id)a0 filterEdgeIdentifiers:(id)a1 error:(id *)a2;
- (id)allEdgesWithError:(id *)a0;
- (id)inEdgeIdentifiersOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (unsigned long long)addEdgeWithLabels:(id)a0 properties:(id)a1 sourceNodeIdentifier:(unsigned long long)a2 targetNodeIdentifier:(unsigned long long)a3 error:(id *)a4;
- (void)_enumerateEdgesWithEdgeCursor:(void *)a0 propertiesCursor:(void *)a1 block:(id /* block */)a2;
- (id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })nodeAttributeValueCursorWithIdentifiers:(id)a0;
- (id)edgeIdentifiersForPropertyName:(id)a0 values:(id)a1 error:(id *)a2;
- (struct shared_ptr<degas::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })degasRangePredicateFromValue1:(id)a0 value2:(id)a1 comparator:(unsigned long long)a2 attrId:(unsigned long long)a3 elementType:(int)a4;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)labelIdentifiers:(void *)a0 forLabels:(id)a1;
- (struct AttributeValueCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })edgeAttributeValueCursorWithIdentifiers:(id)a0;
- (id)labelNameForLabelIdentifier:(unsigned long long)a0;
- (struct NodeCursor { struct shared_ptr<degas::Statement> { struct Statement *x0; struct __shared_weak_count *x1; } x0; })nodeCursorWithIdentifiers:(id)a0;
- (void)transactionChangesAfterTransactionId:(unsigned long long)a0 limit:(long long)a1 block:(id /* block */)a2;

@end
