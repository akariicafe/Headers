@class NSArray, NSNumberFormatter, PKPayLaterSetupFlowController, NSDictionary;
@protocol PKPayLaterProductOptionsSectionControllerDelegate;

@interface PKPayLaterProductOptionsSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    id<PKPayLaterProductOptionsSectionControllerDelegate> _delegate;
    NSNumberFormatter *_numberFormatter;
    BOOL _showAllOptions;
    NSArray *_sortedProductTypeSections;
    NSDictionary *_formattedIdentifiersByProductType;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureProductSectionWithSectionIdentifier:(id)a0 snapshot:(id)a1;
- (void)_configureShowMoreOptionsButtonSectionWithSnapshot:(id)a0;
- (id)_productAssessmentForSectionIdentifier:(id)a0 outIndex:(long long *)a1;
- (long long)_productAssessmentInstallmentCount:(id)a0;
- (id)_productTileDetailRowForProductAssessment:(id)a0 installmentIndex:(long long)a1;
- (id)_tileDetailRowWithTitle:(id)a0 subtitle:(id)a1 text:(id)a2 detailText:(id)a3 textSubtitle:(id)a4 customView:(id)a5 financingOption:(id)a6 preliminaryAssessment:(id)a7;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (id)footerContentForSectionIdentifier:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPage:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
