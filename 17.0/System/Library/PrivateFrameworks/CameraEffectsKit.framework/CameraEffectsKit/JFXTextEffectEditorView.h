@class JFXEffectTextEditingProperties, NSUUID, JFXOverlayEffectDebugViewOptions, UIView, JFXTextEffectEditorTextView, NSString;

@interface JFXTextEffectEditorView : UIView <UIIndirectScribbleInteractionDelegate>

@property (retain, nonatomic) JFXTextEffectEditorTextView *editField;
@property (retain, nonatomic) JFXEffectTextEditingProperties *textEditingProperties;
@property (retain, nonatomic) UIView *transformView;
@property (retain, nonatomic) NSUUID *pencilTextEditingElementID;
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *debugOptions;
@property (retain, nonatomic) UIView *debugView;
@property (readonly, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indirectScribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void)indirectScribbleInteraction:(id)a0 focusElementIfNeeded:(id)a1 referencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)endEditing;
- (void)indirectScribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)indirectScribbleInteraction:(id)a0 isElementFocused:(id)a1;
- (void).cxx_destruct;
- (void)applyTextEditingProperties:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEditingProperties:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEditingProperties:(id)a1 textContainer:(id)a2;

@end
