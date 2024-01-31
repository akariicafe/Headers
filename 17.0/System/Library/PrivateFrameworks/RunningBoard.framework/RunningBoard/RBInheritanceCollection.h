@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {
    NSDictionary *_inheritancesByEnvironment;
    NSSet *_inheritances;
    NSSet *_namespaces;
}

+ (id)collectionWithInheritances:(id)a0;

- (id)_initWithInheritances:(id)a0;
- (id)allEnvironments;
- (id)inheritancesForEnvironment:(id)a0;
- (unsigned long long)count;
- (id)allInheritances;
- (id)_initWithCollection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allNamespaces;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
