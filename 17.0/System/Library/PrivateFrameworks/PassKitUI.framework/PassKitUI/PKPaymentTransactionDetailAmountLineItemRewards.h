@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemRewards : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    NSString *_label;
    NSString *_value;
}

@property (nonatomic) BOOL hasTrailingLineSeperator;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRewardsValueUnit:(unsigned long long)a0 eligibleValue:(id)a1 isEligible:(BOOL)a2 totalAmount:(id)a3 hasPromotionalReward:(BOOL)a4 promotionName:(id)a5;

@end
