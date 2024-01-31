@class NSString, NSDictionary, JFXOverlayEffect, NSObject, JFXEffectsPreviewGenerator;
@protocol OS_dispatch_queue;

@interface CFXOverlayPickerAnimatedPreviewWriter : NSObject {
    struct CGImageDestination { } *_imageDestination;
}

@property (retain, nonatomic) JFXOverlayEffect *overlay;
@property (readonly, nonatomic) struct CGSize { double width; double height; } previewSizeInPixels;
@property (retain, nonatomic) NSString *destinationPath;
@property (retain, nonatomic) NSDictionary *frameProperties;
@property (nonatomic) unsigned long long currentFrameCount;
@property (nonatomic) unsigned long long previewFrameRate;
@property (nonatomic) double previewDuration;
@property (nonatomic) unsigned long long previewStartFrameIndex;
@property (nonatomic) unsigned long long targetFrameCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentRenderTime;
@property (retain, nonatomic) JFXEffectsPreviewGenerator *previewGenerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writerQueue;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isFirstAnimatedFrame;

- (void).cxx_destruct;
- (void)CFX_initializeEffectForPreviewing;
- (void)CFX_writeNextEffectFrame;
- (void)CFX_beginWriting;
- (void)CFX_finishWriting;
- (id)initWithOverlayEffectId:(id)a0 previewSizeInPixels:(struct CGSize { double x0; double x1; })a1 previewDuration:(double)a2 previewFrameRate:(unsigned long long)a3 previewStartFrameIndex:(unsigned long long)a4;
- (void)writeAnimatedPreviewToPath:(id)a0 completion:(id /* block */)a1;

@end
