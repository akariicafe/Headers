@interface WorkflowUI.MoveToFolderViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ newFolderSection;
    void /* unknown type, empty encoding */ myFoldersSection;
    void /* unknown type, empty encoding */ rendererIdentifier;
    void /* unknown type, empty encoding */ shortcutsToMove;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ iconImage;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCoder:(id)a0;
- (id)initWithDatabase:(id)a0 shortcutsToMove:(id)a1;

@end
