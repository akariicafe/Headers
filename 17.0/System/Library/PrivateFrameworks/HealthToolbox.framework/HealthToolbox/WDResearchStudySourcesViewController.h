@interface WDResearchStudySourcesViewController : WDSourcesViewController <HKAdaptiveModalPresented>

+ (id)tableViewSectionClasses;

- (void)viewDidLoad;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (id)initWithProfile:(id)a0 usingInsetStyling:(BOOL)a1;

@end
