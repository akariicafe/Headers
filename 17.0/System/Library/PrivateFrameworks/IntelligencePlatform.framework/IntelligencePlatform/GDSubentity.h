@class NSArray, GDEntityIdentifier, GDRelationshipIdentifier;

@interface GDSubentity : NSObject <GDSubentity>

@property (readonly, nonatomic) GDEntityIdentifier *parentEntityIdentifier;
@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSArray *facts;
@property (readonly, nonatomic) unsigned long long entityClass;

- (void).cxx_destruct;
- (id)initWithParentEntityIdentifier:(id)a0 relationshipIdentifier:(id)a1 facts:(id)a2 entityClass:(unsigned long long)a3;

@end
