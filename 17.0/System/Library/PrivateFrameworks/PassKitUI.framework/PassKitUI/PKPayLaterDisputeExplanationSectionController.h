@class UIImageSymbolConfiguration, PKPayLaterFinancingPlan;

@interface PKPayLaterDisputeExplanationSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan *_financingPlan;
    UIImageSymbolConfiguration *_iconFontConfiguration;
    double _maxIconWidth;
    unsigned long long _layout;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)a0 snapshot:(id)a1;
- (id)_firstSectionIdentifier;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 layout:(unsigned long long)a2 dynamicContentPage:(id)a3 viewControllerDelegate:(id)a4;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
