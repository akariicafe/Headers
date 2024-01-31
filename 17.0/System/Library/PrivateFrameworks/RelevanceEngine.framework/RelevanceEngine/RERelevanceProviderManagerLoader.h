@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject {
    REClassLoader *_loader;
}

+ (id)relevanceProviderManagerLoaderWithBlock:(id /* block */)a0;
+ (id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)a0;
+ (id)disabledRelevanceProviderManagerLoader;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)a0;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)a0 relevanceProviderManagerKey:(id)a1;

- (void)prewarm;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateBundleConfigurations:(id /* block */)a0;
- (void)enumerationDataSourceClassesWithBlock:(id /* block */)a0;

@end
