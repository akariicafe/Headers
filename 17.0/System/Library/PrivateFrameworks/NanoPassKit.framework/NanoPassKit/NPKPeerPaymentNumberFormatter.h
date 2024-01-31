@class NSString, NSNumberFormatter;

@interface NPKPeerPaymentNumberFormatter : NSObject {
    NSNumberFormatter *_decimalNumberFormatter;
    NSNumberFormatter *_nonDecimalNumberFormatter;
}

@property (copy, nonatomic) NSString *currencyCode;

- (id)init;
- (void).cxx_destruct;
- (id)currencySymbol;
- (id)stringFromNumber:(id)a0;
- (id)initWithCurrencyCode:(id)a0;

@end
