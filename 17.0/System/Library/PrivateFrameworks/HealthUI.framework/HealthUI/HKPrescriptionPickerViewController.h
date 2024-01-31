@class NSUUID, NSString, NSArray, NSSet, HKHealthStore, HKSource, NSMutableSet, OBBoldTrayButton, NSBundle;
@protocol HKHealthPrivacyServicePickerControllerDelegate;

@interface HKPrescriptionPickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKPrescriptionPickerCellDelegate, HKHealthPrivacyServicePickerController> {
    HKHealthStore *_healthStore;
    NSArray *_samples;
    NSMutableSet *_samplesPendingAuthorizationUpdate;
    OBBoldTrayButton *_shareButton;
    BOOL _hasData;
    NSBundle *_visionBundle;
}

@property (retain, nonatomic) NSMutableSet *enabledSamples;
@property (copy, nonatomic) HKSource *source;
@property (weak, nonatomic) id<HKHealthPrivacyServicePickerControllerDelegate> delegate;
@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *allSamples;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)cancelButtonTapped:(id)a0;
- (void)_setUpTableView;
- (void)learnMoreButtonTapped:(id)a0;
- (void)shareButtonTapped:(id)a0;
- (void)didTapShowDetailsButtonForCell:(id)a0;
- (void)_enableSample:(id)a0 enabled:(BOOL)a1;
- (id)_explanationTextForSource:(id)a0;
- (id)_headerIcon;
- (id)_headerTitleForSource:(id)a0;
- (id)_loadPreviewControllerForPrescription:(id)a0;
- (id)_noDataTableViewCell;
- (void)_setUpCancelBarButtonItem;
- (void)_setUpFooterView;
- (id)_sortedPrescriptions:(id)a0;
- (void)_updateShareButtonState;
- (void)didToggleSwitchForCell:(id)a0 isOn:(BOOL)a1;
- (id)initWithHealthStore:(id)a0 samples:(id)a1 enabledSamples:(id)a2 source:(id)a3;

@end
