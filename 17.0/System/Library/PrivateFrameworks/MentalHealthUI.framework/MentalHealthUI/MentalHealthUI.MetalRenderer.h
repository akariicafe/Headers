@interface MentalHealthUI.MetalRenderer : NSObject <MentalHealthUI.MetalRendererProtocol> {
    void /* unknown type, empty encoding */ framerateDelegate;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ displayLinkTarget;
    void /* unknown type, empty encoding */ displayLinkWillRenderFrame;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ defaultLibrary;
    void /* unknown type, empty encoding */ metalArchive;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ layer;
    void /* unknown type, empty encoding */ sampleCount;
    void /* unknown type, empty encoding */ superSampling;
    void /* unknown type, empty encoding */ currentTime;
    void /* unknown type, empty encoding */ timeDelta;
    void /* unknown type, empty encoding */ lastDrawableSize;
}

@property (nonatomic, copy) id /* block */ displayLinkWillRenderFrame;
@property (nonatomic) void /* unknown type, empty encoding */ commandQueueIsEmpty;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
