@class UIViewController, HFMediaSystemBuilder;

@interface HUMediaSystemEditorViewController : HUItemCollectionViewController <HUMediaSystemEditorHelperDelegate, HUPresentationDelegateHost> {
    void /* unknown type, empty encoding */ accessoryModule;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
}

@property (nonatomic, readonly) UIViewController *mediaSystemHelperPresentingViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;

- (void)doneWithSender:(id)a0;
- (void)cancelWithSender:(id)a0;
- (void)mediaSystemEditorHelper:(id)a0 didAbortForAccessoryNeedingUpdate:(id)a1;
- (void)mediaSystemEditorHelper:(id)a0 didModifyMediaSystemBuilder:(id)a1;
- (void)mediaSystemEditorHelper:(id)a0 needsToPresentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)mediaSystemEditorHelperDidBeginCommitting:(id)a0;
- (void)mediaSystemEditorHelperDidEndCommitting:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)createMediaSystemWithAccessory:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)createMediaSystem;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithAccessories:(id)a0 home:(id)a1;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithMediaSystemBuilder:(id)a0 staticAccessories:(id)a1;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
