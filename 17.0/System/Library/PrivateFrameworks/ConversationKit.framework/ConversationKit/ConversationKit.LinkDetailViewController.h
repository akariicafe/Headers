@interface ConversationKit.LinkDetailViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryViewProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
    void /* unknown type, empty encoding */ cellRegistration;
    void /* unknown type, empty encoding */ deleteCellRegistration;
    void /* unknown type, empty encoding */ shareCellRegistration;
    void /* unknown type, empty encoding */ linkDetailHeaderSupplementaryViewRegistration;
    void /* unknown type, empty encoding */ cellBackgroundConfiguration;
    void /* unknown type, empty encoding */ linkShareCoordinator;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ linkController;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ avatarController;
    void /* unknown type, empty encoding */ detailControllerFactory;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didTapDeleteLinkButton;
- (void)didTapJoin;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
