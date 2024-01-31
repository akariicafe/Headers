@class NSString, PDFKitPopupViewPrivate;

@interface PDFKitPopupView : UIView <UITextViewDelegate> {
    PDFKitPopupViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFromSuperview;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)doneButton:(id)a0;
- (void)_presentViewController:(id)a0;
- (void)_setupPopupView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverControllerSourceRect;
- (void)_presentPopupView;
- (void)_presentPopupView_iOS;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;
- (id)initWithParentAnnotation:(id)a0 owningPageView:(id)a1 owningPDFView:(id)a2;

@end
