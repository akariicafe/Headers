@class NSDecimalNumber, NSString, NSArray, PKFelicaTransitAppletState, NSNumber, NSDate;

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKFelicaTransitAppletState *felicaState;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSArray *commutePlans;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (nonatomic) BOOL needsStationProcessing;
@property (nonatomic) BOOL appletStateDirty;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4 unitDictionary:(id)a5;
- (void)_resolveTransactionsFromState:(id)a0 toState:(id)a1 withHistoryRecords:(id)a2 concreteTransactions:(id *)a3 ephemeralTransaction:(id *)a4 balanceLabels:(id)a5 unitDictionary:(id)a6 planLabels:(id)a7;
- (void)addEnrouteTransitType:(id)a0;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4 unitDictionary:(id)a5 planLabelDictionary:(id)a6;
- (id)transitPassPropertiesWithPaymentApplication:(id)a0;
- (id)transitPassPropertiesWithPaymentApplication:(id)a0 fieldCollection:(id)a1;
- (id)transitPassPropertiesWithPaymentApplication:(id)a0 pass:(id)a1;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)a0 newTypes:(id)a1;

@end
