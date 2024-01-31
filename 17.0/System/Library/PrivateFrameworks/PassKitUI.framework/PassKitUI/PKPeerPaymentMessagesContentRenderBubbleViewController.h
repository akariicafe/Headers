@class PKPeerPaymentBubbleView, PKPeerPaymentMessage;

@interface PKPeerPaymentMessagesContentRenderBubbleViewController : PKPeerPaymentMessagesContentBaseViewController {
    PKPeerPaymentBubbleView *_bubbleView;
    PKPeerPaymentMessage *_currentMessage;
    BOOL _remoteFetchInProgress;
    struct CGSize { double width; double height; } _pendingBubbleViewSize;
}

- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isMessage:(id)a0 validForTransaction:(id)a1;
- (void)_bubbleViewDoubleTapped;
- (void)_bubbleViewLongPressed;
- (void)_bubbleViewPanned;
- (void)_bubbleViewSelected;
- (void)_fetchStatus;
- (BOOL)_isMessageFromMe:(id)a0;
- (void)_resizeBubbleViewToReferenceSizeAnimated;
- (void)_resizeBubbleViewToSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)bubbleView;
- (id)generatedSnapshot;
- (void)reloadContent;

@end
