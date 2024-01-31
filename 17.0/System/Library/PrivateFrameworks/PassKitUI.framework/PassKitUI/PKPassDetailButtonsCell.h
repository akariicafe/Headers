@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell {
    PKPaymentPassActionWidgetView *_widgetView;
}

- (void)setCurrentUser:(id)a0;
- (void)setAccount:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPaymentPass:(id)a0;
- (void)setPeerPaymentAccount:(id)a0;
- (BOOL)hasEnabledWidgets;
- (id)initWithReuseIdentifier:(id)a0 widgetViewStyle:(unsigned long long)a1;

@end
