@class INPaymentAccount, NSString, INPaymentAmount, INDateComponentsRange;

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>

@property (readonly, copy, nonatomic) INPaymentAccount *fromAccount;
@property (readonly, copy, nonatomic) INPaymentAccount *toAccount;
@property (readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
@property (readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (readonly, copy, nonatomic) NSString *transactionNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setFromAccount:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithFromAccount:(id)a0 toAccount:(id)a1 transactionAmount:(id)a2 transactionScheduledDate:(id)a3 transactionNote:(id)a4;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setToAccount:(id)a0;
- (void)setTransactionAmount:(id)a0;
- (void)setTransactionNote:(id)a0;
- (void)setTransactionScheduledDate:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
