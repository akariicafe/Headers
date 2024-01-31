@class UIButton, NSString, UIView;
@protocol TLKContainerButtonDelegate;

@interface TLKContainerButton : TLKView <UIContextMenuInteractionDelegate>

@property (readonly) UIButton *intrinsicButton;
@property (readonly) UIView *containedView;
@property (readonly) UIView *contentView;
@property (weak, nonatomic) id<TLKContainerButtonDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;

- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)menu;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (id)initWithContent:(id)a0 delegate:(id)a1;
- (void)didSelectButton;
- (id)setupContentView;

@end
