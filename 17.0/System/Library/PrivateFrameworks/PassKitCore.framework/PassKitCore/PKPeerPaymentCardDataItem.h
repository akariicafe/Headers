@class PKPeerPaymentQuote, PKPaymentPass;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)shouldShowDisclosure;
- (BOOL)_validateAccountResolutionsWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)_validateInsufficientBalanceWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)_validateTransferLimitsWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;

@end
