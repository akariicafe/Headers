@class PKPeerPaymentNumberPadActionButton, UIView;

@interface PKPeerPaymentMessagesNumberPadView : UIView {
    UIView *_buttonContainerView;
    PKPeerPaymentNumberPadActionButton *_buttons[4][3];
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;

@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) unsigned long long style;

+ (struct CGSize { double x0; double x1; })referenceSizeForStyle:(unsigned long long)a0;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_buttonForAction:(unsigned long long)a0;
- (void)_handleActionButton:(id)a0;

@end
