@class CKConversationListTipManagerSwift;

@interface CKConversationListTipManager : NSObject

@property (retain, nonatomic) CKConversationListTipManagerSwift *swiftManager;
@property (readonly, nonatomic) long long presentedTip;

- (void).cxx_destruct;
- (void)conversationListControllerDidAppear;
- (void)conversationListControllerDidDisappear;
- (id)initWithConversationListController:(id)a0;
- (id)miniTipUIView;
- (void)userDidPinConversation;

@end
