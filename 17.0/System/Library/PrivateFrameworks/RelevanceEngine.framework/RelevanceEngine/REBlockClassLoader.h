@interface REBlockClassLoader : REClassLoader {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0 configuration:(id)a1;

@end
