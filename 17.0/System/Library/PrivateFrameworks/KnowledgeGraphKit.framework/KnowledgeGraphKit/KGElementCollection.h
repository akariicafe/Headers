@class NSArray, KGGraph, NSSet, KGElementIdentifierSet;
@protocol KGElement;

@interface KGElementCollection : NSObject

@property (readonly, nonatomic) KGElementIdentifierSet *identifiers;
@property (readonly, nonatomic) KGGraph *graph;
@property (readonly) unsigned long long count;
@property (readonly) id<KGElement> anyObject;
@property (readonly) NSArray *allObjects;
@property (readonly) NSSet *set;

- (unsigned long long)hash;
- (void)enumeratePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)description;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;
- (id)collectionByFormingUnionWithCollection:(id)a0;
- (id)collectionByIntersectingCollection:(id)a0;
- (id)collectionBySubtractingCollection:(id)a0;
- (BOOL)containsCollection:(id)a0;
- (void)enumerateElementIdentifierBatchesWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithIdentifiers:(id)a0 graph:(id)a1;
- (BOOL)intersectsCollection:(id)a0;
- (BOOL)isSubsetOfCollection:(id)a0;

@end
