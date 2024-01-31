@class NSArray;

@interface REObjectClassLoader : REClassLoader {
    NSArray *_objects;
}

- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (id)initWithObjects:(id)a0 configuration:(id)a1;

@end
