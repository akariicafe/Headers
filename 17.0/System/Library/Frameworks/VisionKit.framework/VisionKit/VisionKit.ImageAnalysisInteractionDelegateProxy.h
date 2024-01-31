@interface VisionKit.ImageAnalysisInteractionDelegateProxy : NSObject <VKCImageAnalysisInteractionDelegate> {
    void /* unknown type, empty encoding */ owner;
}

- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (id)init;
- (id)contentViewForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 liveTextButtonDidChangeToVisible:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 highlightSelectedItemsValueDidChange:(BOOL)a1;
- (void)textSelectionDidChangeForImageAnalysisInteraction:(id)a0;

@end
