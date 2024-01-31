@class NSString, PXExpectation, PXProgrammaticNavigationDestination;
@protocol PXSurveyQuestionsHorizontalGadgetDelegate;

@interface PXSurveyQuestionsHorizontalGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate, PXProgrammaticNavigationParticipant>

@property (retain, nonatomic) PXExpectation *nextViewLayoutExpectation;
@property (weak, nonatomic) id<PXSurveyQuestionsHorizontalGadgetDelegate> horizontalGadgetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;

- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (unsigned long long)headerStyle;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (BOOL)selectionFollowsFocus;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_checkCanNavigate:(BOOL *)a0 toDestination:(id)a1 iterator:(id)a2;
- (void)_hideAccessoryButtonAction;
- (void)_hideSurveyQuestionsUntilDate:(id)a0;
- (void)_infoAccessoryButtonAction;
- (void)_sendRequestConsentFormMail;
- (id /* block */)accessoryButtonAction;

@end
