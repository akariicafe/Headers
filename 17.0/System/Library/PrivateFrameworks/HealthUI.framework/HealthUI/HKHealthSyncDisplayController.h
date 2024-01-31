@class NSString, HKSource, HKHealthStore, HKCloudSyncControl, UIViewController;
@protocol HKHealthPrivacyHostRemoteViewController, HKHealthPrivacyServicePromptControllerDelegate;

@interface HKHealthSyncDisplayController : OBTableWelcomeController <HKHealthPrivacyServicePromptController>

@property (retain, nonatomic) UIViewController *nextViewController;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (copy, nonatomic) HKSource *source;
@property (retain, nonatomic) HKCloudSyncControl *cloudSyncControl;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (weak, nonatomic) id<HKHealthPrivacyHostRemoteViewController> objectPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_finishWithError:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)_nextButtonPressed:(id)a0;
- (id)_explanationTextForSource:(id)a0;
- (id)_headerTitleForSource:(id)a0;
- (void)_setHeaderIcon;
- (void)_setUpFooterView;
- (void)_viewHealthRecordsCellTapped:(id)a0;
- (id)initWithHealthStore:(id)a0 source:(id)a1;

@end
