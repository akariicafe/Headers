@class NSArray, NSString;

@interface REDirectoryClassLoader : REClassLoader {
    NSArray *_urls;
    NSString *_key;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateBundles:(id /* block */)a0;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (id)initWithDirectories:(id)a0 dataSourceKey:(id)a1 configuration:(id)a2;

@end
