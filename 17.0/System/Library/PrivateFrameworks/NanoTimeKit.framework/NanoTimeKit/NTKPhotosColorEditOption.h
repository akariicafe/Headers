@interface NTKPhotosColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) unsigned long long color;

+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)optionWithColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)originalColorName;
+ (id)pigmentFaceDomain;

- (id)_valueToFaceBundleStringDict;
- (id)pigmentEditOption;

@end
