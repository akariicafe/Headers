@class NSArray;

@interface _NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (retain, nonatomic) NSArray *urls;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateBundles:(id /* block */)a0;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
