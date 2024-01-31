@interface _TtCC12PhotosUICore28StoryThumbnailImageGeneratorP33_2AC47450565EC896EF788DB342AA90677Request : NSObject <PXGEngineDelegate> {
    void /* unknown type, empty encoding */ storyConfiguration;
    void /* unknown type, empty encoding */ storyTraitCollection;
    void /* unknown type, empty encoding */ storyQueue;
    void /* unknown type, empty encoding */ storyModel;
    void /* unknown type, empty encoding */ storyLayout;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ pixelBufferRenderDestination;
    void /* unknown type, empty encoding */ convertToYUV;
    void /* unknown type, empty encoding */ timeoutWaitingForNonDegraded;
    void /* unknown type, empty encoding */ allowDegradedSnapshot;
    void /* unknown type, empty encoding */ waitingForResources;
}

- (id)init;
- (BOOL)engine:(id)a0 shouldRenderLayout:(id)a1 sprites:(id)a2;
- (void).cxx_destruct;
- (void)engineSetNeedsUpdate:(id)a0;

@end
