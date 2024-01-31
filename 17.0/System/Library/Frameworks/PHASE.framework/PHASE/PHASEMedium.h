@class NSArray, PHASEEngine;

@interface PHASEMedium : NSObject {
    PHASEEngine *_engine;
}

@property (nonatomic) struct Handle64 { unsigned long long mData; } geoMediumHandle;
@property (readonly, nonatomic) long long preset;
@property (readonly, nonatomic) long long privatePreset;
@property (readonly, nonatomic) NSArray *attenuationCoefficients;
@property (readonly, nonatomic) float speedOfSound;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initAirWithEngine:(id)a0 temperature:(float)a1 pressure:(float)a2 humidity:(float)a3 bandcount:(int)a4;
- (id)initAirWithEngine:(id)a0 temperature:(float)a1 pressure:(float)a2 humidity:(float)a3 frequencies:(id)a4;
- (id)initWaterWithEngine:(id)a0 temperature:(float)a1 depth:(float)a2 salinity:(float)a3 pH:(float)a4 frequencies:(id)a5;
- (id)initWithEngine:(id)a0 attenuationCoefficients:(id)a1 speedOfSound:(float)a2;
- (id)initWithEngine:(id)a0 preset:(long long)a1;
- (id)initWithEngine:(id)a0 preset:(long long)a1 privatePreset:(long long)a2 attenuationCoefficients:(id)a3 speedOfSound:(float)a4;
- (id)initWithEngine:(id)a0 privatePreset:(long long)a1;
- (void)setDefault;

@end
