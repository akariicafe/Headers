@interface NTKAstronomyVistaEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long astronomyVista;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithAstronomyVista:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
