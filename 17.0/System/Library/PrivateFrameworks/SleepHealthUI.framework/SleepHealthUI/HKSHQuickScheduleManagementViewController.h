@class HKSHQuickScheduleManagementViewControllerInternal, HKSHQuickScheduleManagementViewControllerDelegateWrapper;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

@interface HKSHQuickScheduleManagementViewController : UIViewController {
    HKSHQuickScheduleManagementViewControllerInternal *_internalViewController;
    HKSHQuickScheduleManagementViewControllerDelegateWrapper *_delegateWrapper;
}

@property (weak, nonatomic) id<HKSHQuickScheduleManagementViewControllerDelegate> sleepDelegate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (id)initWithSleepStore:(id)a0;
- (void).cxx_destruct;

@end
