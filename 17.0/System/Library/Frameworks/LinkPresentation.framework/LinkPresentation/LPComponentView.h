@protocol LPComponentViewHost;

@interface LPComponentView : UIView

@property (readonly, weak, nonatomic) id<LPComponentViewHost> host;

- (BOOL)isFlipped;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithHost:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)componentViewDidMoveToWindow;
- (void)layoutComponentView;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)a0;

@end
