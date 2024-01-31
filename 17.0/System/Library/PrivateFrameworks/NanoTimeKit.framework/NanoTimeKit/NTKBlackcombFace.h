@interface NTKBlackcombFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_orderedComplicationSlots;
+ (id)_richComplicationSlotsForDevice:(id)a0;
+ (id)pigmentFaceDomain;

- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)allowedComplicationsForSlot:(id)a0 includingComplication:(id)a1;
- (BOOL)requiresPigmentEditOption;

@end
