@class BKSHIDEventAuthenticationMessage;

@interface UIEventAttributionView : UIView

@property (class, copy, nonatomic) BKSHIDEventAuthenticationMessage *lastEventMessage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)didMoveToWindow;
- (void)_updateLayerContents;

@end
