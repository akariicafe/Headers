@class HUBaseIconViewConfiguration;

@interface HUBaseIconView : UIView {
    void /* unknown type, empty encoding */ iconConstraints;
    void /* unknown type, empty encoding */ configurationWrapper;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ progressView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ roundButtonView;
}

@property (nonatomic, retain) HUBaseIconViewConfiguration *configuration;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)prepareForTransitionToTargetViewState:(long long)a0;
- (void)startTransitionToTargetViewState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
