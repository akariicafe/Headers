@class HKSource, HKClinicalSourceAuthorizationController;

@interface HKClinicalAuthorizationDisplayController : NSObject

@property (readonly, nonatomic) HKClinicalSourceAuthorizationController *authorizationController;
@property (readonly, copy, nonatomic) HKSource *source;

- (id)init;
- (void).cxx_destruct;
- (id)_displayReadAuthorizationDateForMode:(long long)a0;
- (id)_displayStringForReadAuthorizationDate:(id)a0;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)a0 formatBlock:(id /* block */)a1;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)a0 formatBlock:(id /* block */)a1;
- (id)initWithAuthorizationController:(id)a0;

@end
