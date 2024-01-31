@class NSUUID, NSString, NSExtension, CKDetailsNavigationController;

@interface CKTranscriptExtensionViewController : UINavigationController <CKChatControllerDelegate>

@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController;
@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)chatController:(id)a0 didFinishDismissAnimationForSendMenuViewController:(id)a1;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 forwardComposition:(id)a1;
- (void)chatController:(id)a0 requestDeleteJunkConversation:(id)a1;
- (void)chatController:(id)a0 requestPresentSendMenu:(id)a1 withPresentationContext:(id)a2 completion:(id /* block */)a3;
- (void)chatController:(id)a0 requestRecoverJunkConversation:(id)a1;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)chatControllerDidChangeDeferringSystemNavigationPopGestureForPlusButton:(id)a0;
- (void)doneButtonPressedForChatController:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })initialSystemMinimumLayoutMarginsForChatController:(id)a0;
- (void)presentConversationWithMessageGUID:(id)a0 attachmentGUID:(id)a1;
- (void)presentDetailsNavigationController:(id)a0;
- (void)prewarmCameraIfNecessaryForChatController:(id)a0;

@end
