@class NSString, MDLMaterialProperty;

@interface MDLScatteringFunction : NSObject <MDLNamed> {
    struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> { struct __compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> { struct BidirectionalScatteringDistributionFunction *__value_; } __ptr_; } _bsdf;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) MDLMaterialProperty *baseColor;
@property (readonly, retain, nonatomic) MDLMaterialProperty *emission;
@property (readonly, retain, nonatomic) MDLMaterialProperty *specular;
@property (readonly, retain, nonatomic) MDLMaterialProperty *materialIndexOfRefraction;
@property (readonly, retain, nonatomic) MDLMaterialProperty *interfaceIndexOfRefraction;
@property (readonly, retain, nonatomic) MDLMaterialProperty *normal;
@property (readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusion;
@property (readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusionScale;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
