@class BWFileCoordinatorNode, BWAudioConverterNode, BWAudioFileSinkNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {
    BWFileCoordinatorNode *_fileCoordinatorNode;
    BWAudioConverterNode *_audioConverterNode;
    BWAudioFileSinkNode *_audioFileSinkNode;
}

+ (void)initialize;

- (void)dealloc;

@end
