@interface WorkflowEditor.MenuProvidedButton : UIButton {
    void /* unknown type, empty encoding */ menuProvider;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
