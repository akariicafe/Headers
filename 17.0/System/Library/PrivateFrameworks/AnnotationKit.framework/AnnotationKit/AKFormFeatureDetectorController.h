@class NSString, AKController;

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate>

@property (weak) AKController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (id)_convertFont:(id)a0 toSize:(double)a1;
- (void)createAnnotationWithFeature:(id)a0 onPageController:(id)a1;
- (struct CGSize { double x0; double x1; })defaultFeatureSizeForPage:(id)a0;
- (BOOL)detectFormFeatureAtPoint:(struct CGPoint { double x0; double x1; })a0 inPageController:(id)a1;
- (BOOL)formFeature:(id)a0 intersectsAnnotationsOnPage:(id)a1;
- (id)formFeatureAtPoint:(struct CGPoint { double x0; double x1; })a0 inPageController:(id)a1;
- (double)maximumFeatureWidthForPage:(id)a0;
- (BOOL)wantsDefaultFeatures;

@end
