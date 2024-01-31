@class UIAlertController, HKHealthStore, SOSContactsManager, _HKMedicalIDData, WDNotificationManager, UIViewController;

@interface WDContactConsolidationController : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) SOSContactsManager *sosContactsManager;
@property (retain, nonatomic) WDNotificationManager *notificationManager;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) UIAlertController *consolidationAlertController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL isPresentingConsolidationAlert;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 presentingViewController:(id)a1;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_showLearnMoreViewController;
- (void)checkAlertNecessity;
- (void)presentContactConsolidationAlertWithCompletionHandler:(id /* block */)a0;
- (void)presentContactsConsolidationAlert;

@end
