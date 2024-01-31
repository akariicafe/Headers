@class SRUIFInstrumentationManager;

@interface SiriSharedUICompactHostingInstrumentationSupplement : NSObject {
    SRUIFInstrumentationManager *_instrumentationManager;
}

- (void).cxx_destruct;
- (id)initWithInstrumentationManager:(id)a0;
- (void)_logPunchOutEventForSiriViewController:(id)a0 aceCommand:(id)a1 URL:(id)a2 appID:(id)a3 sashItem:(id)a4 shouldCreateNewTurn:(BOOL)a5;
- (BOOL)_shouldCreateNewTurnForSiriViewControllerInteraction:(id)a0 sashItem:(id)a1;
- (void)configureSiriViewControllerWithCurrentTurn:(id)a0;
- (void)logDrillInInteractionForSnippetViewControllerIfNecessary:(id)a0;
- (void)logPunchOutEventForSiriViewController:(id)a0 aceCommand:(id)a1 URL:(id)a2 appID:(id)a3 sashItem:(id)a4;
- (void)logPunchOutEventForSiriViewController:(id)a0 aceCommands:(id)a1 sashItem:(id)a2;
- (int)viewRegionForPresentedAceObject:(id)a0 resultTrasncriptItems:(id)a1 conversationTranscriptItems:(id)a2 serverUtterances:(id)a3;

@end
