@class NSOperationQueue, OKProducerPlugin, OKPresentation;
@protocol OKProducerDelegate;

@interface OKProducer : NSObject {
    NSOperationQueue *_liveAuthoringOperationQueue;
    BOOL _liveAuthoringInProgress;
    double _startLiveAuthorTime;
}

@property (retain, nonatomic) OKProducerPlugin *plugin;
@property (retain, nonatomic) OKPresentation *presentation;
@property (nonatomic) id<OKProducerDelegate> delegate;

+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithPresentation:(id)a0 andPlugin:(id)a1;
- (unsigned long long)totalNumberOfLiveAuthoringItems;
- (void)_continueLiveAuthoring;
- (double)_continueLiveAuthoringDelay;
- (void)addSettingsFromDictionary:(id)a0 onWidget:(id)a1;
- (BOOL)author:(BOOL)a0 progressBlock:(id /* block */)a1 requiresProducer:(inout BOOL *)a2 error:(id *)a3;
- (void)cancelLiveAuthoring:(BOOL)a0;
- (void)cleanupPresentation:(id /* block */)a0;
- (float)currentLiveAuthoringProgress;
- (void)didChangeTextForWidget:(id)a0 toSettings:(id)a1;
- (void)didPanMediaForWidget:(id)a0 toState:(id)a1;
- (BOOL)liveAuthorInitialBootstrap:(id /* block */)a0 error:(id *)a1;
- (id)liveAuthorNextChunk:(id /* block */)a0 error:(id *)a1;
- (id)liveAuthoringOperationQueue;
- (float)liveAuthoringProgressForMediaItem:(id)a0;
- (BOOL)migratePresentation:(id /* block */)a0 error:(id *)a1;
- (BOOL)needsLiveAuthoring;
- (BOOL)prepareLiveAuthoringIfNeeded:(id /* block */)a0 error:(id *)a1;
- (BOOL)resetLiveAuthoring;
- (void)setSettingsObject:(id)a0 forKeyPath:(id)a1 onWidget:(id)a2;
- (void)startLiveAuthoringIfNeeded;
- (BOOL)supportsLiveAuthoring;
- (void)updateSynopsisGuideline;

@end
