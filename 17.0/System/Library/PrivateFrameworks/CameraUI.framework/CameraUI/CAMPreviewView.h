@class AVCaptureVideoPreviewLayer, CEKSubjectIndicatorView, CAMVideoPreviewView, CAMLevelIndicatorView, CAMFocusIndicatorView, CAShapeLayer, CAMHorizonLevelView, CAMInterfaceModulationView, CAMGridView, CAMStageLightOverlayView, UILabel;

@interface CAMPreviewView : UIView

@property (readonly, nonatomic) UILabel *_simulatorLabel;
@property (nonatomic) int _exposureBiasSide;
@property (retain, nonatomic, setter=_setIndicatorContainerMask:) CAShapeLayer *_indicatorContainerMask;
@property (readonly, nonatomic) BOOL _debugDrawZoomPIP;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayFrame;
@property (readonly, nonatomic) CAMVideoPreviewView *videoPreviewView;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, nonatomic) CAMInterfaceModulationView *indicatorContainerView;
@property (nonatomic) long long indicatorClippingStyle;
@property (retain, nonatomic) CAMFocusIndicatorView *continuousIndicator;
@property (retain, nonatomic) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (nonatomic) CAMHorizonLevelView *horizonLevelView;
@property (retain, nonatomic) CEKSubjectIndicatorView *centeredSubjectIndicatorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedZoomPIPRect;
@property (retain, nonatomic) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic) double bottomContentInset;

+ (Class)layerClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForAVMetadataObject:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (int)_faceOrientationForRollAngle:(double)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextRegionResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForMetadataObjectResult:(id)a0 fixedSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateIndicatorContainerMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForMetadataObjectResult:(id)a0;
- (void)indicatePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceIndicatorFrameForFaceResult:(id)a0;
- (void)_drawZoomPIP;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSubjectGroupResult:(id)a0 minimumSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedSizeSubjectIndicatorFrameForBodyResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedSizeSubjectIndicatorFrameForFaceResult:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_isZoomPIPRectValid;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameClampedToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
