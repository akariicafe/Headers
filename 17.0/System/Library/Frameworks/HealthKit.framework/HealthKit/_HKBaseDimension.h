@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor>

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)energy;
+ (id)time;
+ (id)frequency;
+ (id)temperature;
+ (id)electricPotentialDifference;
+ (id)equivalents;
+ (id)length;
+ (id)pressure;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)prismDiopter;
+ (id)titer;
+ (id)hearingSensitivity;
+ (id)nonConvertibleIU;
+ (id)power;
+ (id)mass;
+ (id)volume;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)soundPressureLevel;
+ (id)nonConvertibleMole;
+ (id)nullDimension;
+ (id)conductance;
+ (id)changeInTemperature;
+ (id)diopter;
+ (id)angle;
+ (id)illuminance;

- (id)unitString;
- (id)_baseDimensions;
- (BOOL)canBeReduced;
- (id)_initWithName:(id)a0;
- (id)dimension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
