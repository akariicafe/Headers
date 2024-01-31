@class NSString, NSMutableDictionary, PKPayLaterFinancingPlan;
@protocol PKPayLaterFinancingPlanCancellationSectionControllerDelegate;

@interface PKPayLaterFinancingPlanCancellationSectionController : PKPayLaterSectionController {
    NSMutableDictionary *_rowsByIdentifier;
    NSMutableDictionary *_pageItemByIdentifier;
    NSString *_selectedIdentifier;
    id<PKPayLaterFinancingPlanCancellationSectionControllerDelegate> _delegate;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)a0 sectionIndex:(long long)a1 snapshot:(id)a2;
- (id)_firstSectionIdentifier;
- (id)_identifierForRowItem:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 dynamicContentPage:(id)a2 viewControllerDelegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
