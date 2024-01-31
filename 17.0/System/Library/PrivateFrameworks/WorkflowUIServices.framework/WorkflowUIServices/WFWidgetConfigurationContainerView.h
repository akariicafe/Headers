@class NSArray, WFWidgetConfigurationCardView, NSLayoutConstraint;
@protocol WFWidgetConfigurationContainerViewDelegate;

@interface WFWidgetConfigurationContainerView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _configurationCardViewFrame;
}

@property (readonly, nonatomic) NSArray *defaultCardLayoutConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardWidthLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardHeightLayoutConstraint;
@property (readonly, nonatomic) NSArray *configuredCardLayoutConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardOriginXConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardOriginYConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardHeightConstraint;
@property (readonly, nonatomic) NSArray *configuredSheetLayoutConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetOriginXConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetOriginYConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *avoidingKeyboardConstraint;
@property (readonly, nonatomic) WFWidgetConfigurationCardView *cardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } configurationCardViewFrame;
@property (weak, nonatomic) id<WFWidgetConfigurationContainerViewDelegate> delegate;
@property (nonatomic) unsigned long long widgetConfigurationStyle;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)requestDismissal;
- (void)configureConstraints;
- (id)initWithCardView:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupConfiguredCardFrameConstraints;
- (void)setupConfiguredSheetFrameConstraints;
- (void)setupDefaultConstraintsWithPreferredSize:(struct CGSize { double x0; double x1; })a0;

@end
