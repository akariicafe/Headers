@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint

@property (readonly, nonatomic) NSDictionary *exclusionPaths;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidateSize;
- (void)addExclusionPath:(id)a0 forIdentifier:(id)a1;

@end
