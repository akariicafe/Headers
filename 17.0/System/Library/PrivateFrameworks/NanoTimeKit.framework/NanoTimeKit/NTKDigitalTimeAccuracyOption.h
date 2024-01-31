@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long accuracy;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (long long)indexForAccuracy:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionWithAccuracy:(unsigned long long)a0 forDevice:(id)a1;

- (id)_valueToFaceBundleStringDict;

@end
