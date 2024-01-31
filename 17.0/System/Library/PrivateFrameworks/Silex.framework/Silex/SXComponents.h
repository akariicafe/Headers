@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>

@property (readonly, nonatomic) NSMutableArray *components;
@property (readonly, nonatomic) NSMutableDictionary *componentsByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *childComponentsByParentIdentifier;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allComponents;

- (void)setComponents:(id)a0;
- (id)init;
- (void)addComponent:(id)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)componentAtIndex:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)componentsForContainerComponentWithIdentifier:(id)a0;
- (void)_removeComponent:(id)a0;
- (void)removeAllComponents;
- (void)replaceComponent:(id)a0 withComponent:(id)a1;
- (void)insertComponent:(id)a0 afterComponent:(id)a1;
- (void)addComponentsFromArray:(id)a0;
- (id)componentForIdentifier:(id)a0;
- (id)componentsForContainerComponentWithPath:(id)a0;
- (void)enumerateComponentsWithBlock:(id /* block */)a0;
- (unsigned long long)indexOfComponent:(id)a0;
- (void)insertComponent:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeComponentAtIndex:(unsigned long long)a0;
- (void)removeComponentWithIdentifier:(id)a0;
- (void)replaceComponentAtIndex:(unsigned long long)a0 withComponent:(id)a1;

@end
