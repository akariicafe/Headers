@interface ChatKit.CKChatTipManager : NSObject {
    void /* unknown type, empty encoding */ tipObservation;
    void /* unknown type, empty encoding */ checkInTipObservation;
    void /* unknown type, empty encoding */ chatController;
    void /* unknown type, empty encoding */ inlineTip;
    void /* unknown type, empty encoding */ $__lazy_storage_$_undoOrEditMessageTip;
    void /* unknown type, empty encoding */ checkInTipView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkInTip;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ checkInDelegate;
@property (nonatomic, readonly) BOOL presentingTip;

- (id)init;
- (void).cxx_destruct;
- (void)chatControllerDidAppear;
- (void)chatControllerDidDisappear;
- (void)dismissTipIfPresented;
- (id)initWithChatController:(id)a0;
- (void)presentCheckInTip;
- (void)undoOrEditMessageUsed;

@end
