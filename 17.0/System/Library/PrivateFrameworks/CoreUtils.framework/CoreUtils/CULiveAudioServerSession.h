@class AVAudioFormat, AVAudioPlayerNode, AVAudioEngine, AVAudioConverter, NSObject;
@protocol OS_dispatch_queue;

@interface CULiveAudioServerSession : NSObject {
    AVAudioConverter *_audioConverter;
    AVAudioEngine *_audioEngine;
    AVAudioFormat *_audioInputFormat;
    AVAudioFormat *_audioOutputFormat;
    AVAudioPlayerNode *_audioPlayerNode;
    BOOL _playbackStarted;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)activateAndReturnError:(id *)a0;
- (void)handleDataEvent:(id)a0;

@end
