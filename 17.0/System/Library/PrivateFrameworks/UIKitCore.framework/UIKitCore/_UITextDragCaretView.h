@class CAShapeLayer, UIView;
@protocol UITextInput;

@interface _UITextDragCaretView : UIView {
    UIView<UITextInput> *_view;
    CAShapeLayer *_mask;
}

@property (nonatomic) BOOL rangesExcludeSelection;

- (void)remove;
- (id)_rectsForRange:(id)a0;
- (void).cxx_destruct;
- (void)_performUpdate:(id)a0;
- (id)_caretColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_configureMask:(id)a0 withPath:(id)a1;
- (void)_insertAtRangeOrPosition:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;
- (BOOL)_isRemoveAnimatesBackToCaret;
- (id)_maskForRects:(id)a0;
- (id)_rangeColor;
- (void)_updateToRangeOrPosition:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;
- (id)initWithTextInputView:(id)a0;
- (void)insertAtPosition:(id)a0;
- (void)insertAtPosition:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)insertAtRange:(id)a0;
- (void)insertAtRange:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)insertAtRange:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;
- (void)removeWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)removeWithAnimations:(id /* block */)a0 completion:(id /* block */)a1 animated:(BOOL)a2;
- (void)updateToPosition:(id)a0;
- (void)updateToPosition:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)updateToRange:(id)a0;
- (void)updateToRange:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)updateToRange:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;

@end
