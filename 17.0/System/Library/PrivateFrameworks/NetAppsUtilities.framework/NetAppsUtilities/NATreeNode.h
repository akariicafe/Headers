@class NSEnumerator, NSSet, NAIdentity, NSMutableSet, NSString;

@interface NATreeNode : NSObject <NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSMutableSet *internalChildNodes;
@property (retain, nonatomic) id representedObject;
@property (readonly, copy, nonatomic) NSSet *childNodes;
@property (readonly, nonatomic) NSEnumerator *shallowRepresentedObjectEnumerator;
@property (readonly, nonatomic) NSEnumerator *shallowNodeEnumerator;
@property (readonly, nonatomic) NSEnumerator *deepNodeEnumerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)childAtIndexPath:(id)a0 withChildrenSortedByComparator:(id /* block */)a1;
- (id)childrenSortedByComparator:(id /* block */)a0;
- (id)initWithRepresentedObject:(id)a0;
- (id)initWithRepresentedObject:(id)a0 childNodes:(id)a1;

@end
