@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory *_overlayFactory;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantSymbolFrameInsets;
- (struct CGPoint { double x0; double x1; })popupSymbolTextOffset;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (struct CGPoint { double x0; double x1; })variantSymbolTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantPaddedFrameInsets;
- (BOOL)isTallPopup;
- (void).cxx_destruct;
- (double)popupFontSize;
- (Class)_overlayFactoryClass;
- (id)initWithRenderingContext:(id)a0 skipLayoutSegments:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPopupMenuInsets;

@end
