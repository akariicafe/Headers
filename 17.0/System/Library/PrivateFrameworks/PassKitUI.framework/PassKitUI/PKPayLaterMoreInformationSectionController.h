@class UIImageSymbolConfiguration, PKPayLaterSetupFlowController;

@interface PKPayLaterMoreInformationSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    double _maxIconWidth;
    UIImageSymbolConfiguration *_iconFontConfiguration;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)a0 snapshot:(id)a1;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPage:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
