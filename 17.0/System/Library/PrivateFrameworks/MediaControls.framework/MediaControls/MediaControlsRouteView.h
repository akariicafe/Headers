@class NSString, NSTimer, UILabel, CCUICAPackageView, MTVisualStylingProvider;

@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSTimer *messageTimer;
@property (nonatomic) BOOL displayMessage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange;
- (void)showMessage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void).cxx_destruct;
- (void)setGlyphState:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateLabelVisualStyling;

@end
