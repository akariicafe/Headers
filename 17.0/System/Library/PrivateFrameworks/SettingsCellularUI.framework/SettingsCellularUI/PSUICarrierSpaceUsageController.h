@interface PSUICarrierSpaceUsageController : PSListController

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)getLogger;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldShowData:(id)a0;
- (BOOL)hasMultipleDevicesOfTheSameType;
- (id)usageCategories;
- (id)barGraphColors;
- (id)callsDescription:(id)a0;
- (void)carrierSpaceChanged;
- (id)dataUsageDescription:(id)a0;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)a0;
- (BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)a0;
- (BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (id)messagesDescription:(id)a0;
- (id)planCategorySectionLabelForPlanMetrics:(id)a0;
- (id)remainingCreditDescription:(id)a0;
- (BOOL)shouldShowCalls:(id)a0;
- (BOOL)shouldShowMessages:(id)a0;
- (BOOL)shouldShowOnlyRemainingCalls:(id)a0;
- (BOOL)shouldShowOnlyRemainingData:(id)a0;
- (BOOL)shouldShowOnlyRemainingMessages:(id)a0;
- (BOOL)shouldShowPlanSection:(id)a0;
- (BOOL)shouldShowRemainingCredit:(id)a0;
- (void)simStatusChanged;
- (id)usageGraphSpecifierForSection:(id)a0;
- (id)usageSections;

@end
