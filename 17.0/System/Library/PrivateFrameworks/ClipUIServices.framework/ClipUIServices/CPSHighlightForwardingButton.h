@protocol CPSHighlightable;

@interface CPSHighlightForwardingButton : UIButton

@property (weak, nonatomic) id<CPSHighlightable> highlightForwardingTarget;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
