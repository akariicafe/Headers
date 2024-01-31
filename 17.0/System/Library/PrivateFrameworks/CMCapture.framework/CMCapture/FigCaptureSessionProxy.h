@protocol FigCaptureSessionPreviewTapDelegate;

@interface FigCaptureSessionProxy : NSObject {
    struct OpaqueFigCaptureSession { } *_session;
    long long _identifier;
    BOOL _previewTapOpened;
    id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;
}

@property (readonly) long long identifier;

+ (void)initialize;

- (void)dealloc;
- (int)openPreviewTapWithDelegate:(id)a0;
- (void)closePreviewTap;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0 identifier:(long long)a1;

@end
