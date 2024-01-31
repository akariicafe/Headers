@interface DKEraseConfirmationAlertController : UIAlertController

+ (id)alertControllerWithCompletion:(id /* block */)a0;
+ (id)alertControllerWithCellularPlans:(id)a0 completion:(id /* block */)a1;

- (BOOL)_canShowWhileLocked;

@end
