@interface _NTKBundleBlockComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
