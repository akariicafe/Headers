@class NSString;

@interface NTKBasePhotosFace : NTKFace {
    NSString *_cachedResourceDirectorySnapshotKey;
}

+ (id)_complicationSlotDescriptors;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_orderedComplicationSlots;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsEditing;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (void)_migrateLegibility;
- (id)_resourceDirectorySnapshotKey;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (void)_updateForResourceDirectoryChange:(id)a0;

@end
