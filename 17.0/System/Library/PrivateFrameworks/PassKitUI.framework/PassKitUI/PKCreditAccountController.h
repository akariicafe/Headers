@interface PKCreditAccountController : PKAccountFlowController

+ (BOOL)_shouldDisplayBalanceAndTransactionsForTransactionSourceCollection:(id)a0;
+ (BOOL)_shouldDisplayBalanceForAccount:(id)a0;
+ (BOOL)_shouldDisplayTransactionsForAccount:(id)a0;
+ (unsigned long long)paymentEducationStateForAccount:(id)a0 mostRecentTransactions:(id)a1 pendingPayments:(id)a2 upcomingScheduledPayments:(id)a3;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)a0 account:(id)a1;
+ (void)resolutionToReceiveCashbackForAccount:(id)a0 accountUser:(id)a1 withPeerPaymentAccount:(id)a2 completion:(id /* block */)a3;
+ (BOOL)shouldDisplayAccountInformationForTransactionSourceCollection:(id)a0 withAccount:(id)a1;
+ (BOOL)shouldDisplayScheduledPaymentsWithAccount:(id)a0 andPass:(id)a1;
+ (BOOL)shouldDisplayTransactionsForTransactionSourceCollection:(id)a0 withAccount:(id)a1;
+ (BOOL)shouldShowCardNumbersWithAccount:(id)a0 andPass:(id)a1;

@end
