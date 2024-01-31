@class NSString, UIEditMenuInteraction;

@interface MUPlaceSectionRowView : MKViewWithHairline <UIEditMenuInteractionDelegate, MUSelectable> {
    UIEditMenuInteraction *_editMenuInteraction;
}

@property (readonly, nonatomic) BOOL supportsInteractionMenuItems;
@property (nonatomic) BOOL handlesHighlighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)rowViewWithContentView:(id)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateBackgroundColor:(BOOL)a0;
- (id)_createCopyAction;
- (id)_speechMenuElementFromSuggestedActions:(id)a0;

@end
