@class TLKLabel, NSString, TLKStackView;

@interface TLKButtonView : TLKView

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) NSString *title;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (id)setupContentView;

@end
