@class UIWindow, NSString, UIPDFPageView, CAShapeLayer, UIView, CALayer;

@interface UIPDFMagnifierController : NSObject <CALayerDelegate> {
    UIWindow *_textEffectsWindow;
    UIView *_textEffectsSubView;
    CALayer *_loLayer;
    CALayer *_hiLayer;
    CALayer *_imageContainer;
    CALayer *_imageLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_maskLayer;
    double _power;
    struct CGSize { double width; double height; } _magnifierSize;
    BOOL _loupe;
    struct CGPoint { double x; double y; } _touchPoint;
    struct CGPoint { double x; double y; } _pointToMagnify;
    double _enlargementScale;
    CALayer *_leftBar;
    CALayer *_leftGrabber;
    CALayer *_rightBar;
    CALayer *_rightGrabber;
    struct CGSize { double width; double height; } _controlPointSize;
    struct CGColor { } *_grabberColor;
    unsigned long long _pageRotation;
    BOOL _visible;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)showMagnifier;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)hide;
- (BOOL)visible;
- (void)_show;
- (void)addBling;
- (void)addTextRangeHandles;
- (struct CGPoint { double x0; double x1; })convertPointToEnlargedSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToRotatedPage:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToEnlargedSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToRotatedPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertViewPointToEnlargedSpace:(struct CGPoint { double x0; double x1; })a0;
- (id)imageReceived:(id)a0 data:(id)a1;
- (BOOL)isSelectionUniformlyRotated:(double *)a0;
- (void)move;
- (void)placeImage;
- (struct CGPoint { double x0; double x1; })pointToMagnifyInPDFSpace;
- (void)setImageContainerMask;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setLayerPositions;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 viewPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setPower;
- (void)setSelectionPath;
- (void)setSelectionPath:(struct CGPath { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)setTextRangeHandlePositions;
- (void)showLoupe;
- (void)tearDownLayers;
- (struct CGPoint { double x0; double x1; })viewPointInTextEffectsSpace;

@end
