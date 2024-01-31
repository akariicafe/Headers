@interface PXSharingUserSafetyController : NSObject

@property (class, readonly, nonatomic) BOOL userSafetyInterventionCheckRequired;

+ (void)_userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)a0 completion:(id /* block */)a1;
+ (id)interventionAlertControllerWithAction:(id /* block */)a0;
+ (id)interventionViewControllerWithAction:(id /* block */)a0;
+ (void)userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)a0 completion:(id /* block */)a1;

@end
