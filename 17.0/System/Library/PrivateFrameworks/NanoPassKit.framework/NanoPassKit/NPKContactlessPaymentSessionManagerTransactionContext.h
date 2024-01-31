@class PKPass, NSString, NSArray, STSTransaction18013Request, PKPaymentTransaction, NPKPaymentBarcode, STS18013ReaderAuthInfo, PKPassTile;

@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject

@property (retain, nonatomic) PKPass *transactionPass;
@property (retain, nonatomic) PKPass *valueAddedServicePass;
@property (retain, nonatomic) NSString *paymentMethodDescription;
@property (retain, nonatomic) PKPaymentTransaction *paymentTransaction;
@property (nonatomic) unsigned long long transactionStatus;
@property (nonatomic) unsigned long long transactionType;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSString *transactionDescription;
@property (retain, nonatomic) NSArray *displayablePassItems;
@property (retain, nonatomic) NPKPaymentBarcode *paymentBarcode;
@property (nonatomic) BOOL authenticationRequested;
@property (nonatomic) unsigned long long releaseDataStatus;
@property (retain, nonatomic) STSTransaction18013Request *releaseDataRequest;
@property (retain, nonatomic) STS18013ReaderAuthInfo *readerAuthInfo;
@property (retain, nonatomic) PKPassTile *passTile;

+ (id)_NPKTransactionContextActionDescriptionForNPKTransactionContextAction:(unsigned long long)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned long long)a0;
- (void)updateWithConcreteTransactions:(id)a0 ephemeralTransaction:(id)a1 updatedPassTransitItems:(id)a2 paymentApplication:(id)a3;

@end
