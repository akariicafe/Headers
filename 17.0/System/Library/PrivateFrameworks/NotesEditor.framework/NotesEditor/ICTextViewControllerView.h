@class ICTextView;

@interface ICTextViewControllerView : UIView

@property (readonly, nonatomic) ICTextView *textView;

- (id)initWithTextView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
