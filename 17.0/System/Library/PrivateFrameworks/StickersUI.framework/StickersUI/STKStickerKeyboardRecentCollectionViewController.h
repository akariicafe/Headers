@interface STKStickerKeyboardRecentCollectionViewController : StickersUI.StickerCollectionViewController {
    void /* unknown type, empty encoding */ moreButtonIdentifier;
    void /* unknown type, empty encoding */ blankCellUUIDs;
    void /* unknown type, empty encoding */ blankCellIndexPaths;
    void /* unknown type, empty encoding */ previousContainerSize;
    void /* unknown type, empty encoding */ indexesInColumnOrder;
}

- (id)init;
- (void)viewWillLayoutSubviews;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
