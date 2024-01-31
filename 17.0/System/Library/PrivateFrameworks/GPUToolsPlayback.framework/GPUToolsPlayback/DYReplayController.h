@class DYPlaybackEngine, DYTransport, NSMutableDictionary, DYTransportMessage, DYReplayControllerQueue, DYCaptureArchiveStack, NSMutableArray, DYTransportSource, NSObject;
@protocol OS_dispatch_queue, DYReplayControllerSupport;

@interface DYReplayController : NSObject {
    NSObject<OS_dispatch_queue> *_messageLock;
    NSObject<OS_dispatch_queue> *_messageProcessingQueue;
    NSMutableArray *_messageQueue;
    DYReplayControllerQueue *_profileBlockQueue;
    DYReplayControllerQueue *_profileBlockBackgroundQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) DYTransport *transport;
@property (retain, nonatomic) DYTransportSource *source;
@property (retain, nonatomic) DYTransportMessage *replayMessage;
@property (copy, nonatomic) id /* block */ origSourceMessageHandler;
@property (retain, nonatomic) DYCaptureArchiveStack *archiveStack;
@property (retain, nonatomic) DYPlaybackEngine *playbackEngine;
@property (retain, nonatomic) id<DYReplayControllerSupport> replayControllerSupport;
@property (retain, nonatomic) NSMutableArray *experiments;
@property (retain, nonatomic) NSMutableDictionary *profileInfo;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_processMessage:(id)a0;
- (void)_endPlayback;
- (id)_archiveDirectory;
- (void)_beginDebugArchive;
- (void)_deleteAllArchives;
- (void)_displayPlaybackEngine;
- (BOOL)_handleArchiveLoadingForPlaybackRequest:(id)a0 replyKind:(int)a1;
- (BOOL)_loadArchives:(id)a0 error:(id *)a1;
- (void)_messageLoop;
- (void)_playbackArchiveWithExperiment:(id)a0 passingFuture:(id)a1 resolvingFuture:(BOOL)a2;
- (id)_playbackCurrentArchiveAndExperiments;
- (id)_popMessage;
- (void)_pushMessage:(id)a0;
- (void)_recursivePlaybackWithFuture:(id)a0 usingExperiment:(id)a1 withToplevelFuture:(id)a2;
- (id)_replayerControllerSupportForCaptureStore:(id)a0;
- (BOOL)informReady;
- (BOOL)initializeTransportWith:(id)a0;
- (BOOL)playbackArchive:(id)a0;
- (id)profileBlockBackgroundQueue;
- (id)profileBlockQueue;

@end
