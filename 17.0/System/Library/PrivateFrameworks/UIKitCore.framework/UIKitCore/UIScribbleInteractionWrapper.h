@class NSString, UIScribbleInteraction, UIView, UIIndirectScribbleInteraction;
@protocol UIInteraction;

@interface UIScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper> {
    UIScribbleInteraction *_scribbleInteraction;
    UIIndirectScribbleInteraction *_indirectInteraction;
}

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *interactionView;
@property (readonly, nonatomic) id<UIInteraction> interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)suggestedStrokeColorForElement:(id)a0;
- (BOOL)beginSuppressingPlaceholderForElement:(id)a0;
- (void)didFinishWritingInElement:(id)a0;
- (void)endSuppressingPlaceholderForElement:(id)a0;
- (void)focusElement:(id)a0 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (BOOL)focusWillTransformElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElement:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 element:(id)a1;
- (id)initWithCustomScribbleInteraction:(id)a0 indirectScribbleInteraction:(id)a1;
- (BOOL)isElement:(id)a0 inFrontOf:(id)a1;
- (BOOL)isElementContainer;
- (BOOL)isElementFocused:(id)a0;
- (void)requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (BOOL)shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldDisableInputAssistant;
- (BOOL)supportsIsElementFocused;
- (BOOL)supportsIsElementInFrontOfElement;
- (BOOL)supportsShouldBegin;
- (void)willBeginWritingInElement:(id)a0;

@end
