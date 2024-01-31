@class BWFanOutNode, BWAudioSplitNode, BWAudioSourceNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWAudioSourceNode *_sourceNode;
    BWFanOutNode *_fanOutNodesByMicSourcePosition[3];
    BWAudioSplitNode *_audioSplitNodesByMicSourcePosition[3];
    unsigned int _nextOutputIndexByMicSourcePosition[3];
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}

+ (void)initialize;

- (void)dealloc;

@end
