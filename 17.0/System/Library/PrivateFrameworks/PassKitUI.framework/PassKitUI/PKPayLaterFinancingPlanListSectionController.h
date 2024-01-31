@class PKPaymentPass, NSArray, PKPayLaterPaymentIntentController, NSMutableDictionary, PKPaymentTransactionIconGenerator, NSNumberFormatter, PKPayLaterBusinessChatTopic;
@protocol PKPayLaterFinancingPlanListSectionControllerDelegate;

@interface PKPayLaterFinancingPlanListSectionController : PKPayLaterSectionController {
    PKPayLaterPaymentIntentController *_paymentIntentController;
    NSArray *_sortedPriaryFinancingPlanIdentifiers;
    NSArray *_sortedSecondaryFinancingPlanIdentifiers;
    NSMutableDictionary *_primaryFinancingPlanRows;
    NSMutableDictionary *_secondaryFinancingPlanRows;
    NSMutableDictionary *_icons;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    id<PKPayLaterFinancingPlanListSectionControllerDelegate> _delegate;
    NSNumberFormatter *_numberFormatter;
}

@property (readonly, nonatomic) unsigned long long context;
@property (retain, nonatomic) NSArray *primaryFinancingPlans;
@property (retain, nonatomic) NSArray *secondaryFinancingPlans;
@property (retain, nonatomic) PKPayLaterBusinessChatTopic *businessChatTopic;
@property (retain, nonatomic) PKPaymentPass *payLaterPass;
@property (nonatomic) long long tertiaryFinancingPlansCount;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configurePrimaryFinancingPlansSection:(id)a0;
- (void)_configureSecondaryFinancingPlansSection:(id)a0;
- (void)_configureTertiaryFinancingPlansCountSection:(id)a0;
- (id)_createFinancingPlanRowForPlan:(id)a0 rowIndex:(long long)a1;
- (id)_createIconTextRowForPlan:(id)a0;
- (id)_rowForPlanIdentifier:(id)a0;
- (void)_showTopicExplanationForRow:(id)a0 topic:(id)a1 financingPlan:(id)a2 continueBlock:(id /* block */)a3;
- (void)_updateCachedValues;
- (void)_updateIconForFinancingPlan:(id)a0 row:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })firstSectionHeaderEdgeInsets;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 context:(unsigned long long)a1 primaryFinancingPlans:(id)a2 secondaryFinancingPlans:(id)a3 tertiaryFinancingPlansCount:(long long)a4 payLaterPass:(id)a5 businessChatTopic:(id)a6 paymentIntentController:(id)a7 dynamicContentPage:(id)a8 delegate:(id)a9;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
