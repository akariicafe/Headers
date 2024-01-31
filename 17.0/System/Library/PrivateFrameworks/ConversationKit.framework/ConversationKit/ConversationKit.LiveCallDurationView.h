@class NSString;

@interface ConversationKit.LiveCallDurationView : UIView {
    void /* unknown type, empty encoding */ controller;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL hidden;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
