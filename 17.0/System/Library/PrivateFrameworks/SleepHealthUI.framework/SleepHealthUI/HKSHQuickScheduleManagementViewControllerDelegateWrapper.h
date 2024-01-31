@class HKSHQuickScheduleManagementViewController;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

@interface HKSHQuickScheduleManagementViewControllerDelegateWrapper : NSObject <HKSHQuickScheduleManagementViewControllerDelegateInternal>

@property (weak, nonatomic) id<HKSHQuickScheduleManagementViewControllerDelegate> wrappedDelegate;
@property (weak, nonatomic) HKSHQuickScheduleManagementViewController *viewController;

- (void).cxx_destruct;
- (void)quickScheduleManagementViewController:(id)a0 didSave:(id)a1;
- (void)quickScheduleManagementViewController:(id)a0 shouldPresent:(id)a1;
- (void)quickScheduleManagementViewControllerDidCancel:(id)a0;
- (void)quickScheduleManagementViewControllerWillSave:(id)a0;

@end
