@interface WFParameterHostingView : UIView {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ initialState;
    void /* unknown type, empty encoding */ updatedState;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)attachToParentViewController:(id)a0;
- (void)configureConfigurationUIViewWithParameter:(id)a0 state:(id)a1 processing:(BOOL)a2 shouldFocus:(BOOL)a3 variableProvider:(id)a4 widgetFamily:(long long)a5 fillProvider:(id)a6 overridingCellBackgroundColor:(id)a7 updateBlock:(id /* block */)a8;
- (void)configureViewWithParameter:(id)a0 state:(id)a1 processing:(BOOL)a2 shouldFocus:(BOOL)a3 variableProvider:(id)a4 updateBlock:(id /* block */)a5;
- (void)detachFromParentViewController;

@end
