@interface PXImportAssetActionManager : PXAssetActionManager {
    void /* unknown type, empty encoding */ importItem;
    void /* unknown type, empty encoding */ importController;
}

- (id)initWithSelectionManager:(id)a0;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (id)initWithImportItem:(id)a0 importController:(id)a1;

@end
