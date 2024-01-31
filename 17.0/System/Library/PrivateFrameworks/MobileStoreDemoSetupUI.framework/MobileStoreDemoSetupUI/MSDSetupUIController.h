@class NSData, BFFNavigationController;

@interface MSDSetupUIController : NSObject

@property (retain, nonatomic) BFFNavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSData *helpMenuUserTapped;
@property BOOL originalLocationServicesState;
@property (nonatomic) double autoEnrollmentTimeStamp;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setupComplete:(BOOL)a0;
- (BOOL)hasSecureCookie;
- (void)_restoreLocationServicesState;
- (void)_startEACSWithReason:(id)a0 eraseDataPlan:(BOOL)a1;
- (void)disconnectWiFi;
- (void)enableLocationServices;
- (void)markAsNotDemoAndEraseDataPlan:(BOOL)a0;
- (void)popTopmostViewController;
- (void)pushViewController:(id)a0 andRemoveTopmostView:(BOOL)a1;
- (void)quitToCustomerFlow;
- (void)quitToHomeScreen;
- (void)quitToOfflineMode;
- (void)saveLocationServicesState;
- (void)setHelpMenuRowSelection:(id)a0;
- (void)setupCompleteWithStoreID:(id)a0;

@end
