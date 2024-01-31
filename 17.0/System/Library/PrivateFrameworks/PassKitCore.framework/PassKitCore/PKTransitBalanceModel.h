@class PKPaymentPass, NSString, NSArray, NSDictionary, PKTransitPassProperties, NSMutableArray, NSMutableDictionary;

@interface PKTransitBalanceModel : NSObject {
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    NSArray *_dynamicPlans;
    NSMutableDictionary *_dynamicPlansById;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) NSString *primaryDisplayableBalance;
@property (readonly, nonatomic) NSString *displayableListOfBalances;
@property (readonly, nonatomic) NSArray *displayableBalances;
@property (readonly, nonatomic) NSArray *displayableCurrencyBalances;
@property (readonly, nonatomic) NSArray *displayablePointsBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances;
@property (readonly, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlanActions;
@property (retain, nonatomic) NSMutableArray *balanceFields;
@property (readonly, nonatomic) NSDictionary *balancesAndCountPlansByID;
@property (readonly, nonatomic) BOOL hasBalanceContent;
@property (readonly, nonatomic) BOOL hasCurrencyBalance;
@property (readonly, nonatomic) BOOL hasPointsBalance;
@property (readonly, nonatomic) BOOL hasPositiveBalance;
@property (readonly, nonatomic) BOOL hasCommutePlanContent;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPass:(id)a0;
- (void)_updateBalancesAndPlans;
- (void)applyStoredValueBalancesFromProperties:(id)a0;
- (id)balanceForIdentifiers:(id)a0;
- (id)filteredActionsForDisplayableEntities;
- (id)primaryDisplayableBalance;
- (void)setDynamicBalances:(id)a0;
- (void)setDynamicBalancesByID:(id)a0;
- (void)setTransitProperties:(id)a0;
- (void)setTransitProperties:(id)a0 andApplyStoredValueBalances:(BOOL)a1;
- (void)updateWithDynamicBalances:(id)a0;
- (void)updateWithDynamicCommutePlans:(id)a0;

@end
