@interface CKConversationListTipManagerSwift : NSObject {
    void /* unknown type, empty encoding */ conversationListController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_siriMessageTip;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinningConversationTip;
    void /* unknown type, empty encoding */ tipObservationTasks;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ miniTipUIView;
@property (nonatomic) void /* unknown type, empty encoding */ presentedTip;

- (id)init;
- (void).cxx_destruct;
- (void)conversationListControllerDidAppear;
- (void)conversationListControllerDidDisappear;
- (id)initWithConversationListController:(id)a0;
- (void)userDidPinConversation;

@end
