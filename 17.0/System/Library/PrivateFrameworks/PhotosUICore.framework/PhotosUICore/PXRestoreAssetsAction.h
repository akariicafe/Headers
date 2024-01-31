@interface PXRestoreAssetsAction : PXAssetsAction

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)performUndo:(id /* block */)a0;

@end
