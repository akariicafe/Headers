@interface PGGraphHighlightTranslator : PGGraphEntityTranslator

+ (id)entityClassName;
+ (BOOL)includesRelationshipChanges;

- (id)highlightUpdateSearchProperties;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)graphChangesForDeletedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)graphChangesForInsertedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)highlightUpdateAssetCountProperties;
- (id)highlightUpdateDateProperties;
- (id)highlightUpdateTypeProperties;
- (id)momentUpdateTypeByHighlightProperty;

@end
