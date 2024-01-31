@class NSString, HULockCategorySettingsItemManager, HFPinCodeManager, HFUserNotificationServiceTopic;

@interface HULockCategorySettingsViewController : HUItemCollectionViewController <UITextViewDelegate>

@property (retain, nonatomic) HULockCategorySettingsItemManager *lockSettingsItemManager;
@property (retain, nonatomic) HFUserNotificationServiceTopic *topic;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithLockTopic:(id)a0 home:(id)a1;
- (id)initWithLockTopic:(id)a0 pinCodeManager:(id)a1 home:(id)a2;

@end
