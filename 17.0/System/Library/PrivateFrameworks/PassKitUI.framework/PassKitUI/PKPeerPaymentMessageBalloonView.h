@class PKPeerPaymentBubbleView, CKTranscriptPluginBalloonView;

@interface PKPeerPaymentMessageBalloonView : UIView

@property (retain, nonatomic) CKTranscriptPluginBalloonView *balloonView;
@property (readonly, nonatomic) PKPeerPaymentBubbleView *bubbleView;
@property (readonly, nonatomic) long long peerPaymentType;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTailOrientation;
- (id)initWithBubbleView:(id)a0 peerPaymentType:(long long)a1;

@end
