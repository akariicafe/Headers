@class UILongPressGestureRecognizer, NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface PXUILivePhotoTrimScrubber : PXLivePhotoTrimScrubber <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stretchableImageNamed:(id)a0 withCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)createSnappingControllerWithSnappingTarget:(double)a0;
+ (id)trimEndHighlightedImage;
+ (id)trimEndHighlightedImageMini;
+ (id)trimEndImage;
+ (id)trimEndImageMini;
+ (id)trimStartHighlightedImage;
+ (id)trimStartHighlightedImageMini;
+ (id)trimStartImage;
+ (id)trimStartImageMini;

- (void)_handlePan:(id)a0;
- (void)setDisabled:(BOOL)a0;
- (void)_handleTap:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_handleLongPress:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_PXUILivePhotoTrimScrubber_commonInit;
- (void)_handleBeginPanGesture:(id)a0;
- (void)_handleChangePanGesture:(id)a0;
- (void)impactOccured;
- (id)initWithFilmStripViewClass:(Class)a0 spec:(id)a1 traitCollection:(id)a2;
- (void)prepareForImpact;

@end
