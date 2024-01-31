@class PKMerchant, PKPayLaterMerchant, NSString, NSArray, PKPaymentTransaction;

@interface PKPaymentTransactionIconRequest : NSObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) PKPayLaterMerchant *payLaterMerchant;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSArray *completionHandlers;
@property (nonatomic) BOOL ignoreLogoURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)logoURL;

@end
