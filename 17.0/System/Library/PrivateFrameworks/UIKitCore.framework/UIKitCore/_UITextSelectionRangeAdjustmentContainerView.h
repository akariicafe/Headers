@class NSArray, UIView;
@protocol UITextSelectionHandleView;

@interface _UITextSelectionRangeAdjustmentContainerView : UIView {
    BOOL _selectionGrabbersAreConcreteImpl;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endEdge;
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic) double shapeScale;
@property (nonatomic) BOOL portalsLollipopDotsToContainerWindow;
@property (nonatomic, getter=areSelectionGrabbersHidden) BOOL selectionGrabbersHidden;
@property (readonly, nonatomic, getter=areSelectionGrabbersConcreteImpl) BOOL selectionGrabbersAreConcreteImpl;
@property (retain, nonatomic) NSArray *selectionGrabbers;
@property (readonly, nonatomic) UIView<UITextSelectionHandleView> *leadingLollipopView;
@property (readonly, nonatomic) UIView<UITextSelectionHandleView> *trailingLollipopView;

- (id)textInputView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_getBounds:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 position:(out struct CGPoint { double x0; double x1; } *)a1 fromPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_setPortalsLollipopDotsToContainerWindow:(BOOL)a0;

@end
