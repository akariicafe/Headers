@class UIListContentView, NSString, UIEditMenuInteraction, UIButton;

@interface MFHideMyEmailHeaderView : UIStackView <UIEditMenuInteractionDelegate> {
    UIListContentView *_contentView;
    UIButton *_infoButton;
}

@property (copy, nonatomic) NSString *address;
@property (retain, nonatomic) UIEditMenuInteraction *editInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)copy:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didTriggerEditGesture:(id)a0;
- (void)infoButtonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 address:(id)a1;

@end
