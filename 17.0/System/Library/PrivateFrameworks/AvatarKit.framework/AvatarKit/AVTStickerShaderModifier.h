@class NSDictionary, NSString, NSArray;

@interface AVTStickerShaderModifier : NSObject {
    BOOL _isCropShaderModifier;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) id nodeNames;
@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) BOOL forceDoubleSided;

+ (id)encapsulateShaderData:(id)a0;
+ (id)entryPointForModifierName:(id)a0;
+ (id)shaderModifierCache;
+ (id)shaderModifierFromDictionary:(id)a0 assetsPath:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)applyToAllMaterialsOfNode:(id)a0 options:(id)a1 reversionContext:(id)a2;
- (void)applyToMaterial:(id)a0 options:(id)a1 reversionContext:(id)a2;
- (void)applyToMaterialsOfMatchedNodesInHierarchy:(id)a0 options:(id)a1 reversionContext:(id)a2;
- (id)cloneWithProperties:(id)a0;
- (id)dictionaryWithTargetPath:(id)a0;
- (id)initWithEntryPoint:(id)a0 nodeNames:(id)a1 data:(id)a2 properties:(id)a3 forceDoubleSided:(BOOL)a4;

@end
