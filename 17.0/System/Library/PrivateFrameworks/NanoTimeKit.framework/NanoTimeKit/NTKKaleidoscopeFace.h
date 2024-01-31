@class NSString;

@interface NTKKaleidoscopeFace : NTKFace {
    NSString *_cachedResourceDirectorySnapshotKey;
}

+ (id)_complicationSlotDescriptors;
+ (BOOL)_customEditMode:(long long)a0 hasActionForOption:(id)a1 forDevice:(id)a2;
+ (Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)a0;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_orderedComplicationSlots;
+ (id)_sortableFaceOfStyle:(long long)a0 withAssets:(id)a1;
+ (id)sortableFaceWithAssets:(id)a0;
+ (BOOL)supportsExternalAssets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (Class)_optionClassForCustomEditMode:(long long)a0 resourceDirectoryExists:(BOOL)a1;
- (id)_resourceDirectorySnapshotKey;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;
- (BOOL)_shouldIncludeResourceDirectoryForSharing;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (void)_updateForResourceDirectoryChange:(id)a0;
- (id)addFaceDetailViewController;
- (void)companionEditorWithAssets:(id)a0 completion:(id /* block */)a1;
- (id)editOptionThatHidesAllComplications;
- (BOOL)isUsingCustomAsset;
- (id)libraryDetailViewController;

@end
