@class AKController;

@interface AKToolController : NSObject

@property (weak) AKController *controller;
@property (nonatomic) BOOL allInkEnabled;
@property (nonatomic) BOOL pencilInkEnabled;
@property (readonly, nonatomic) BOOL isInDefaultMode;
@property (nonatomic) unsigned long long toolMode;

+ (void)cascadeAnnotations:(id)a0 onPageController:(id)a1 forPaste:(BOOL)a2;

- (void)dealloc;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (id)_defaultTypingAttributes;
- (id)_defaultTextBoxTypingAttributes;
- (unsigned long long)defaultToolMode;
- (unsigned long long)_arrowStyleForToolTag:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_defaultCenterForNewAnnotation;
- (id)_defaultFillColorForAnnotationOfClass:(Class)a0;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultRectangleForNewAnnotation:(id)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (void)_peripheralAvailabilityDidUpdate:(id)a0;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)a0;
- (id)_strokeColorForNewAnnotation;
- (double)_strokeWidthForNewAnnotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validatedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fitsInVisibleRegionOfOverlayView:(id)a1 ownedByPageController:(id)a2 centeredAtPoint:(struct CGPoint { double x0; double x1; })a3;
- (void)addNewAnnotation:(id)a0 onPageController:(id)a1 shouldSelect:(BOOL)a2 shouldCascade:(BOOL)a3;
- (id)createAnnotationOfType:(long long)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isToolSenderEnabled:(id)a0;
- (void)performToolActionForSender:(id)a0;
- (void)resetToDefaultMode;
- (void)updateToolSenderState:(id)a0 enabled:(BOOL)a1;

@end
