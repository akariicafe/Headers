@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}

- (id)init;
- (void)dealloc;
- (void)openPreviewStreamWithOptions:(id)a0;
- (void)closePreviewStream;

@end
