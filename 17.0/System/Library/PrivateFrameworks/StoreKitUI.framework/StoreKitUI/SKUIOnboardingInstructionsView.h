@class UILabel, NSMutableArray;

@interface SKUIOnboardingInstructionsView : UIView {
    NSMutableArray *_labelsStack;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) UILabel *explanationLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long contentPosition;

+ (id)explanationAttributedStringWithString:(id)a0;
+ (id)titleAttributedStringWithString:(id)a0;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_newTitleLabel;
- (id)_newExplanationLabel;
- (void)popLabelState;
- (void)pushLabelState;
- (void)setContentPosition:(long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
