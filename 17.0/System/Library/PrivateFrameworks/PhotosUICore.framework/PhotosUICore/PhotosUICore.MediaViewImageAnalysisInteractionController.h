@interface PhotosUICore.MediaViewImageAnalysisInteractionController : NSObject <VKCImageAnalysisInteractionDelegate> {
    void /* unknown type, empty encoding */ interaction;
    void /* unknown type, empty encoding */ analysisTarget;
    void /* unknown type, empty encoding */ shouldAnimateInteractionHideState;
    void /* unknown type, empty encoding */ activeInteractionTypes;
    void /* unknown type, empty encoding */ automaticallyInvokedInteraction;
    void /* unknown type, empty encoding */ _analysisInteractionHidden;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ $__lazy_storage_$_observable;
    void /* unknown type, empty encoding */ analyzer;
    void /* unknown type, empty encoding */ analysisResult;
    void /* unknown type, empty encoding */ analyzerObservation;
}

- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)a0;
- (id)init;
- (void)imageAnalysisInteraction:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)contentImageForImageAnalysisInteraction:(id)a0;
- (void).cxx_destruct;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;

@end
