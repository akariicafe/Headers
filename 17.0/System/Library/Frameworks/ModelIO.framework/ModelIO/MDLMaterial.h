@class NSString, MDLScatteringFunction, NSMutableArray;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {
    NSMutableArray *_userProperties;
    NSMutableArray *_builtinProperties;
    MDLScatteringFunction *_scatteringFunction;
}

@property (readonly, retain, nonatomic) MDLScatteringFunction *scatteringFunction;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) MDLMaterial *baseMaterial;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long materialFace;

+ (id)decodeMaterialWithCoder:(id)a0 allocator:(id)a1;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllProperties;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeProperty:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)propertyNamed:(id)a0;
- (id)propertyWithSemantic:(unsigned long long)a0;
- (id)initWithName:(id)a0 scatteringFunction:(id)a1;
- (struct BidirectionalScatteringDistributionFunction { void /* function */ **x0; struct BSDFMaterialValues { struct CGColor *x0; float x1; struct CGColor *x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x1; } *)bsdf;
- (void)conformToMatProperties;
- (void)encodeMaterialWithCoder:(id)a0 allocator:(id)a1;
- (id)initWithName:(id)a0 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution { void /* function */ **x0; struct BSDFMaterialValues { struct CGColor *x0; float x1; struct CGColor *x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x1; } *)a1;
- (void)loadTexturesUsingArchiveAssetResolver:(id)a0 cache:(id)a1;
- (void)loadTexturesUsingResolver:(id)a0;
- (void)loadTexturesUsingResolver:(id)a0 cache:(id)a1;
- (id)propertiesWithSemantic:(unsigned long long)a0;
- (void)resolveTexturesWithResolver:(id)a0;
- (void)setScatteringFunction:(id)a0;

@end
