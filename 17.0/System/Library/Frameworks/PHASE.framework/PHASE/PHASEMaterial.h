@class PHASEAbsorptionData, PHASEScatteringData, PHASESoundReductionIndex, PHASEEngine;

@interface PHASEMaterial : NSObject {
    PHASEEngine *_engine;
}

@property (nonatomic) struct Handle64 { unsigned long long mData; } geoMaterialHandle;
@property (readonly, nonatomic) long long preset;
@property (readonly, nonatomic) PHASESoundReductionIndex *soundReductionIndex;
@property (readonly, nonatomic) PHASEAbsorptionData *absorptionData;
@property (readonly, nonatomic) PHASEScatteringData *scatteringData;
@property (nonatomic) float attenuationScale;
@property (nonatomic) float attenuationShift;
@property (nonatomic) float attenuationTilt;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEngine:(id)a0 parameterTypes:(unsigned long long)a1 semantics:(id)a2;
- (id)initWithEngine:(id)a0 preset:(long long)a1;
- (id)initWithEngine:(id)a0 preset:(long long)a1 soundReductionIndex:(id)a2 absorptionData:(id)a3 scatteringData:(id)a4;
- (id)initWithEngine:(id)a0 semantics:(id)a1;
- (id)initWithEngine:(id)a0 soundReductionIndex:(id)a1 absorptionData:(id)a2 scatteringData:(id)a3;
- (void)writeMaterialCoefs:(BOOL)a0;

@end
