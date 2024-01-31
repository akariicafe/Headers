@interface FinHealthRecurringHelper : NSObject

+ (id)histogramKeysForCardPurchaseTransaction:(id)a0 transactionAmount:(id)a1 transactionType:(long long)a2 amountFromDatabase:(long long)a3;
+ (id)histogramKeysForPeerPaymentTransaction:(id)a0 transactionAmount:(id)a1 transactionPeerPaymentSubtype:(long long)a2 amountFromDatabase:(long long)a3;
+ (id)histogramKeysForTopUpTransaction:(id)a0 amountFromDatabase:(long long)a1;
+ (id)histogramKeysForTransaction:(id)a0;
+ (id)rootMeanSquareError:(id)a0;
+ (id)rootMeanSquareError:(id)a0 decimalKey:(id)a1 startIndex:(unsigned long long)a2 arrayLength:(unsigned long long)a3 decimalDenominator:(id)a4;
+ (id)rootMeanSquareError:(id)a0 startIndex:(unsigned long long)a1 arrayLength:(unsigned long long)a2;
+ (void)rootMeanSquareErrorForSlidingWindowWithCompletion:(id)a0 slidingWindowWidth:(unsigned long long)a1 decimalThreshold:(id)a2 decimalDenominator:(id)a3 decimalKeyEntry:(id)a4 completion:(id /* block */)a5;

@end
