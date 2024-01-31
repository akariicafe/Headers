@interface NTKBasePhotoFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_orderedComplicationSlots;

- (BOOL)_allowsEditing;
- (id)_localizedNameForComplicationSlot:(id)a0;

@end
