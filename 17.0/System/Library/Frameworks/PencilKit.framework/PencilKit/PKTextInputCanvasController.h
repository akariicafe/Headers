@class UIColor, NSString, NSMutableDictionary, NSMutableSet, PKTextInputFloatingBackgroundView, PKStroke, PKTiledCanvasView;
@protocol PKTextInputCanvasControllerChangeObserver, PKTextInputCanvasControllerDelegate;

@interface PKTextInputCanvasController : NSObject <PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting> {
    NSMutableSet *_recentlyRemovedStrokeIDs;
    BOOL _useSlidingCanvas;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _currentStrokePoints;
    NSMutableDictionary *_strokeColorForStrokeUUID;
    PKStroke *_currentStroke;
    BOOL _wantsCanvasVisible;
    BOOL _wantsCanvasViewLoaded;
    id<PKTextInputCanvasControllerDelegate> _delegate;
    id<PKTextInputCanvasControllerChangeObserver> _changeObserver;
    UIColor *_strokeColor;
    PKTiledCanvasView *__canvasView;
    PKTextInputFloatingBackgroundView *__floatingBackgroundView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _floatingBackgroundRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)canvasView:(id)a0 beganStroke:(id)a1;
- (void)canvasView:(id)a0 cancelledStroke:(id)a1;
- (void)canvasView:(id)a0 didPresentWithCanvasOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)canvasView:(id)a0 drawingDidChange:(id)a1;
- (void)canvasView:(id)a0 endedStroke:(id)a1;
- (id)canvasView:(id)a0 inkForStroke:(id)a1;
- (void)canvasViewDidBeginDrawing:(id)a0;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasViewDidFinishAnimatingStrokes:(id)a0;
- (void)canvasViewDrawingMoved:(id)a0 withTouch:(id)a1;
- (void)canvasViewHasVisibleStrokesChanged:(id)a0;
- (BOOL)canvasViewShouldDisableShapeRecognition:(id)a0;
- (id)canvasViewTouchView:(id)a0;
- (void)canvasViewWillBeginNewStroke:(id)a0 withTouch:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)replayCanvasViewDrawingMoved:(id)a0 inputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)reportDebugStateDescription:(id /* block */)a0;

@end
