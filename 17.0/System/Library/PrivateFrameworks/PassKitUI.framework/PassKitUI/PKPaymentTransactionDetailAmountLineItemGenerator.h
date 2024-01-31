@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject

- (id)_lineItemsForWithdrawalTransaction:(id)a0 transactionSourceCollection:(id)a1;
- (id)_feeLineItemsForFees:(id)a0;
- (id)_foreignExchangeLineItemsForExchangeInfo:(id)a0;
- (id)_lineItemsForPeerPaymentTransaction:(id)a0 transactionSourceCollection:(id)a1;
- (id)_lineItemsForPurchaseTransaction:(id)a0 transactionSourceCollection:(id)a1 associatedReceipt:(id)a2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)a0 transactionSourceCollection:(id)a1;
- (id)_rewardsLineItemsForRewards:(id)a0 currencyCode:(id)a1;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)a0;
- (id)_subtotalLineItemForTransaction:(id)a0;
- (id)_totalPaidLineItemForTransaction:(id)a0 isUnqualified:(BOOL)a1;
- (id)_totalReceivedLineItemForTransaction:(id)a0;
- (id)_totalRequestedLineItemForTransaction:(id)a0;
- (id)_totalSentLineItemForTransaction:(id)a0;
- (id)_totalTransferredItemForTransaction:(id)a0;
- (id)lineItemsForInstallmentPlan:(id)a0;
- (id)lineItemsForTransaction:(id)a0 transactionSourceCollection:(id)a1 associatedTransaction:(id)a2 associatedReceipt:(id)a3;

@end
