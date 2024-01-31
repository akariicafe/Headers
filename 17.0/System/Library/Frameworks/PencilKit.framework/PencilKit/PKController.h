@class PKMetalRendererController, NSArray, PKMetalConfig, PKDrawing, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, PKControllerDelegate, OS_dispatch_semaphore;

@interface PKController : NSObject {
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
    PKMetalConfig *_metalConfig;
    BOOL _sixChannelBlending;
    NSMutableArray *_liveDrawingUndoCommands;
    BOOL _liveInteraction;
    BOOL _drawBitmapEraserMask;
    BOOL _onDrawingQueue;
    NSObject<PKControllerDelegate> *_delegate;
    PKMetalRendererController *_rendererController;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_drawingQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

- (id)init;
- (void).cxx_destruct;

@end
