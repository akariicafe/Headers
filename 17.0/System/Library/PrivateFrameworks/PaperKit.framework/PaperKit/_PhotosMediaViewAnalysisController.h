@class NSError, NSString, UIImage, NSHashTable, VKCImageAnalyzer, PXDisplayAssetView, VKCImageAnalysis, VKCImageAnalysisInteraction;
@protocol PPKPhotosMediaViewImageAnalysisInteractionContextDelegate;

@interface _PhotosMediaViewAnalysisController : NSObject <VKCImageAnalysisInteractionDelegate, PPKPhotosMediaViewImageAnalysisInteractionContext> {
    PXDisplayAssetView *_assetView;
    VKCImageAnalyzer *_analyzer;
    NSError *_error;
    VKCImageAnalysisInteraction *_interaction;
    UIImage *_image;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (nonatomic) unsigned long long automaticallyInvokedInteraction;
@property (readonly, nonatomic) BOOL analysisInteractionHidden;
@property (readonly, nonatomic) BOOL actionInfoViewHidden;
@property (nonatomic) BOOL highlightSelectableItemsEnabled;
@property (readonly, nonatomic) NSString *infoButtonGlyphName;
@property (readonly, nonatomic) NSString *filledInfoButtonGlyphName;
@property (readonly, nonatomic) VKCImageAnalysis *analysis;
@property (readonly, nonatomic) NSError *error;
@property (weak, nonatomic) id<PPKPhotosMediaViewImageAnalysisInteractionContextDelegate> delegate;

- (void)setAnalysis:(id)a0;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)contentImageForImageAnalysisInteraction:(id)a0;
- (void)_enumerateObservers:(id /* block */)a0;
- (void)setActionInfoViewHidden:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;
- (void)_handleAnalysisResult:(id)a0 error:(id)a1;
- (void)_handleImageResult:(struct CGImage { } *)a0 orientation:(long long)a1 info:(id)a2;
- (void)_performAutomaticallyInvokedInteractionIfNeeded;
- (void)addAnalysisObserver:(id)a0;
- (id)initWithAssetView:(id)a0;
- (void)removeAnalysisObserver:(id)a0;
- (void)setAnalysisInteractionHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)toggleInteractionTypes:(unsigned long long)a0;

@end
