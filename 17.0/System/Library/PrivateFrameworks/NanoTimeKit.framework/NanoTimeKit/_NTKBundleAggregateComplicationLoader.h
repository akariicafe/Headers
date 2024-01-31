@class NSOrderedSet;

@interface _NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) NSOrderedSet *loaders;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
