@class PXSurveyQuestionsHorizontalGadgetProviderConfiguration, NSDate;

@interface PXSurveyQuestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXSurveyQuestionsGadgetProviderDelegate, PXForYouRankable> {
    PXSurveyQuestionsHorizontalGadgetProviderConfiguration *_configuration;
}

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)gadgetType;
- (void)didAnswerQuestionForGadgetProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)hideForeverAlertMessageForHorizontalCollectionGadget:(id)a0;
- (void)horizontalCollectionGadget:(id)a0 configureCustomInfoAlertActionsForAlertController:(id)a1;
- (void)horizontalCollectionGadget:(id)a0 hideUntilDate:(id)a1;
- (id)infoAlertMessageForHorizontalCollectionGadget:(id)a0;
- (id)infoAlertTitleForHorizontalCollectionGadget:(id)a0;
- (id)initWithIdentifier:(id)a0 contentGadgetProvider:(id)a1 title:(id)a2 horizontalCollectionGadgetClass:(Class)a3;
- (id)radarConfigurationForHorizontalCollectionGadget:(id)a0;

@end
