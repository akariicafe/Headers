@class PKPaymentPass, NSString, NSArray, PKPaymentWebService, PKTransitBalanceModel, UIViewController;
@protocol PKPaymentDataProvider;

@interface PKPaymentPassCombinedActionDataController : NSObject <PKCombinedActionViewControllerDelegate> {
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    PKTransitBalanceModel *_transitBalanceModel;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
