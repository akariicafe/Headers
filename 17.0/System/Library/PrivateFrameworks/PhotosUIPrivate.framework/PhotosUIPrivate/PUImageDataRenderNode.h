@class NSString, NSArray, NSData, PICompositionController;
@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode>

@property (readonly, nonatomic) id<PUImageInfoNode> imageDataNode;
@property (readonly, nonatomic) id<PUVideoURLNode> videoURLNode;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) double jpegCompression;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } baseImageSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderedImageSize;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)_editSource;
- (void)_handleRenderCompletedWithJpegData:(id)a0 baseSize:(struct CGSize { double x0; double x1; })a1 editedSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_isInputValid;
- (id)initWithImageInfoNode:(id)a0 videoURLNode:(id)a1 compositionController:(id)a2 livePhotoPairingIdentifier:(id)a3 jpegCompression:(double)a4;

@end
