@class UILabel, NSString, PREditingStandaloneLabelViewInteractiveTransition;

@interface PREditingStandaloneLabelView : UIView

@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) PREditingStandaloneLabelViewInteractiveTransition *currentTransition;
@property (copy, nonatomic) NSString *text;

+ (id)newLabel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setDisplayedText:(id)a0;
- (id)beginInteractiveTransitionToText:(id)a0;
- (void)interactiveTransition:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)interactiveTransition:(id)a0 didUpdate:(double)a1;

@end
