@class NSArray, UIVisualEffectView, UIStackView;

@interface AKCandidatePickerView_iOS : UIView

@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;
@property (retain, nonatomic) NSArray *itemTags;
@property (retain, nonatomic) NSArray *annotations;
@property (retain, nonatomic) NSArray *buttons;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)a0;
- (void)_createButtonsWithBlurStyle:(long long)a0;
- (void)_selectBackground:(id)a0;
- (void)_selectBackground:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 items:(id)a1 annotations:(id)a2 target:(id)a3 action:(SEL)a4 visualStyle:(long long)a5;
- (void)setBarHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (long long)tagForCandidateItemAtIndex:(unsigned long long)a0;

@end
