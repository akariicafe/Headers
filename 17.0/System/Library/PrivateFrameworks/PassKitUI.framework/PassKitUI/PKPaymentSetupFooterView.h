@class UILabel, UIButton;
@protocol PKLegacyButtonInterface;

@interface PKPaymentSetupFooterView : PKTableFooterView {
    UIButton *_skipCardButton;
    UIButton *_secondaryActionButton;
    UILabel *_notificationText;
}

@property (nonatomic) long long context;
@property (nonatomic) BOOL forceShowSetupLaterButton;
@property (retain, nonatomic) UILabel *notificationText;
@property (retain, nonatomic) UIButton *manualEntryButton;
@property (retain, nonatomic) UIButton *setupLaterButton;
@property (retain, nonatomic) UIButton *skipCardButton;
@property (retain, nonatomic) UIButton<PKLegacyButtonInterface> *primaryButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (id)secondaryActionButtonWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })_adjacentButtonSizeConstrainedToSize:(struct CGSize { double x0; double x1; })a0;
- (id)_alternateActionButtonWithTitle:(id)a0;
- (void)_createSetupLaterButton;
- (void)_recreateSetupLaterButton;
- (void)_setUIView:(id)a0 forVariable:(id *)a1;
- (struct CGSize { double x0; double x1; })_sizeForLabel:(id)a0 maxText:(id)a1 constrainedToSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_useAdjacentLayout;
- (void)setButtonsEnabled:(BOOL)a0;

@end
