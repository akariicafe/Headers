@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) double cornerRadiusScale;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;

@end
