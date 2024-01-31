@class NSDictionary;

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary *_removedAssetIdentifiers;
    NSDictionary *_removedAssetIndexes;
}

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (void)performUndo:(id /* block */)a0;

@end
