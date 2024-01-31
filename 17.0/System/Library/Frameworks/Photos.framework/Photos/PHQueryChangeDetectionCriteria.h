@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)a0;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(id /* block */)a0;
- (id)initWithPLQueryChangeDetectionCriteria:(id)a0;

@end
