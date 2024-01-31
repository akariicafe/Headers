@class CALayer, CKBaseLayer;
@protocol CKTypingIndicatorLayerProtocol;

@interface CKTypingView : UIView

@property (retain, nonatomic) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;
@property (retain, nonatomic) CKBaseLayer *baseLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
