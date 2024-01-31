@interface PXRemoveAssetLocationAction : PXAssetLocationAction

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsActionString;
- (id)locationForAsset:(id)a0 shifted:(BOOL *)a1;

@end
