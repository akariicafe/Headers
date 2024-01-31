@class NSArray, PXGCompositeTungstenRecordingSession;

@interface PXGTungstenEngineRecordingSession : NSObject <PXGTungstenRecordingSession> {
    PXGCompositeTungstenRecordingSession *_rendererRecordingSessions;
}

@property (readonly, nonatomic) NSArray *recordingURLs;
@property (readonly, nonatomic) BOOL isStopped;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 directoryURL:(id)a1;

@end
