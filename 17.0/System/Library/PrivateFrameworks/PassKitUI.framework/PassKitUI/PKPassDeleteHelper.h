@interface PKPassDeleteHelper : NSObject

+ (BOOL)_canDeletePaymentPass:(id)a0 transitPassProperties:(id)a1;
+ (void)deletePaymentPass:(id)a0 withDeleteHander:(id)a1 passLibraryDataProvider:(id)a2 presentingViewController:(id)a3;
+ (void)deletePaymentPassAlertCopyForPass:(id)a0 webService:(id)a1 paymentServiceDataProvider:(id)a2 isBridge:(BOOL)a3 completion:(id /* block */)a4;
+ (void)deletePaymentPassAlertCopyForPass:(id)a0 withAccount:(id)a1 paymentServiceDataProvider:(id)a2 transitBalanceModel:(id)a3 transitPassProperties:(id)a4 merchantTokensResponse:(id)a5 isBridge:(BOOL)a6 completion:(id /* block */)a7;
+ (BOOL)hasAppleCashMerchantTokenForMerchantTokensResponse:(id)a0;
+ (void)presentDeleteBarcodePassAlertForPass:(id)a0 withHandler:(id)a1 presentingViewController:(id)a2;
+ (void)presentDeletePaymentPassAlertForPass:(id)a0 withAccount:(id)a1 paymentServiceDataProvider:(id)a2 transitBalanceModel:(id)a3 transitPassProperties:(id)a4 detailViewStyle:(long long)a5 deleteHander:(id)a6 passLibraryDataProvider:(id)a7 presentingViewController:(id)a8;
+ (void)presentMerchantTokenDeletePaymentPassAlertForPass:(id)a0 withAccount:(id)a1 merchantTokensResponse:(id)a2 deleteHander:(id)a3 passLibraryDataProvider:(id)a4 navigationController:(id)a5 presentingViewController:(id)a6 isBridge:(BOOL)a7;

@end
