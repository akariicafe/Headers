@interface PKWalletTransactionSignal : NSObject

+ (BOOL)walletTransactionTriggerEnabled;
+ (void)_donateSignalForPass:(id)a0 transactionType:(int)a1 transactionDate:(id)a2 transactionID:(id)a3 merchantCategory:(long long)a4 merchantDetailedCategory:(id)a5 queue:(id)a6 completion:(id /* block */)a7;
+ (void)donateSignalForPass:(id)a0 transaction:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)donateSignalForPass:(id)a0 transactionType:(int)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
