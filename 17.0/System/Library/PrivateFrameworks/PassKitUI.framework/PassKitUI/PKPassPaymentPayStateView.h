@class UILabel, NSString, PKGlyphView;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {
    long long _style;
    double _glyphViewPadding;
    double _labelTopPadding;
    BOOL _didLayout;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long layoutState;
@property (readonly, nonatomic) PKGlyphView *glyph;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UILabel *debugLabel;
@property (nonatomic) double labelStateBottomInset;
@property (nonatomic) double labelAlpha;
@property (readonly, nonatomic) BOOL biometricsUnavailableHint;
@property (nonatomic) BOOL recognizingHint;
@property (nonatomic) long long userIntentStyle;
@property (nonatomic) BOOL persistentEmulationHint;
@property (nonatomic) BOOL accessPass;
@property (nonatomic) BOOL homeKeyPass;
@property (weak, nonatomic) id<PKPassPaymentPayStateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_applyStatePreservingGlyphState:(BOOL)a0 overridingText:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_attributedTextWithTitle:(id)a0;
- (id)_attributedTextWithTitle:(id)a0 subtitle:(id)a1;
- (BOOL)_canEmphasizeState:(long long)a0;
- (BOOL)_canPreserveGlyphForState:(long long)a0;
- (void)_configureLayoutMetrics;
- (long long)_defaultGlyphStateForState:(long long)a0;
- (void)_resolveLayout;
- (id)_textForState:(long long)a0 textOverride:(id)a1;
- (id)_titleForUserIntent;
- (void)emphasizeStateIfPossible:(long long)a0 withOverrideText:(id)a1;
- (void)glyphView:(id)a0 revealingCheckmark:(BOOL)a1;
- (BOOL)labelWillChangeForState:(long long)a0 withOverrideText:(id)a1;
- (void)setBiometricsUnavailableHint:(BOOL)a0 animated:(BOOL)a1;
- (void)setState:(long long)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)setState:(long long)a0 animated:(BOOL)a1 withOverrideText:(id)a2 preserveGlyphState:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)updateDebugLabel:(id)a0 isErrorState:(BOOL)a1;

@end
