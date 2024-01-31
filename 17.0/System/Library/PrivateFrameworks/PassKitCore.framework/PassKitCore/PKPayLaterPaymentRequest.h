@class PKCurrencyAmount, NSString, NSDictionary, PKPayLaterFinancingPlan, PKBankAccountInformation, NSURL, PKAccountWebServiceFinancingPlanPaymentIntentResponse;

@interface PKPayLaterPaymentRequest : PKPaymentRequest {
    NSDictionary *_bankIdentifierToFundingSource;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    PKCurrencyAmount *_currencyAmount;
}

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *payLaterPassUniqueID;
@property (readonly, nonatomic) NSString *defaultPassUniqueID;
@property (readonly, nonatomic) PKBankAccountInformation *defaultBankAccount;
@property (readonly, nonatomic) unsigned long long supportedRepaymentTypes;
@property (readonly, nonatomic) unsigned long long payLaterPaymentIntentType;
@property (readonly, copy, nonatomic) NSURL *accountBaseURL;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_acceptedBankAccountsForAcceptedFundingSources:(id)a0;
- (id)acceptedPassesWithPassLibrary:(id)a0 peerPaymentAccount:(id)a1;
- (id)accountPaymentFundingSourceForBankIdentifier:(id)a0;
- (BOOL)hasAvailableFundingSource;
- (id)initWithIntentDetails:(id)a0 payLaterAccount:(id)a1 financingPlan:(id)a2 intent:(unsigned long long)a3 acceptedFundingSources:(id)a4 currencyAmount:(id)a5 hasAdequateAppleCashBalance:(BOOL)a6 countryCode:(id)a7;
- (BOOL)isEqualToPayLaterPaymentRequest:(id)a0;
- (BOOL)showPeerPaymentBalance;

@end
