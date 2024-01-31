@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (readonly, nonatomic) unsigned long long _value;

+ (id)domain;
+ (id)legacyOptionWithName:(id)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (BOOL)_valueIsValid:(unsigned long long)a0 forDevice:(id)a1;
+ (unsigned long long)indexOfOption:(id)a0 forDevice:(id)a1;
+ (id)legacyOptionWithPigmentEditOption:(id)a0 forDevice:(id)a1;
+ (unsigned long long)numberOfOptionsForDevice:(id)a0;
+ (id)optionAtIndex:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionsRestrictedByDevice:(id)a0;

@end
