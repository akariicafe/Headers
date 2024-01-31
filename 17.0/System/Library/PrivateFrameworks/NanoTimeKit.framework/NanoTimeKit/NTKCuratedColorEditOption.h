@interface NTKCuratedColorEditOption : NTKFaceColorEditOption

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_curatedColorValuesForDevice:(id)a0;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)curatedColorValuesForDevice:(id)a0;

- (id)_valueToFaceBundleStringDict;

@end
