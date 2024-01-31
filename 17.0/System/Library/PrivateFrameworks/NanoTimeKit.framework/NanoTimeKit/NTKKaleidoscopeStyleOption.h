@interface NTKKaleidoscopeStyleOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long style;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (long long)indexForStyle:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithStyle:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
