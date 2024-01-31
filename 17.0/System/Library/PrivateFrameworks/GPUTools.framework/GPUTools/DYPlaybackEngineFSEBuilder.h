@protocol DYCaptureStore;

@interface DYPlaybackEngineFSEBuilder : DYInOrderInstructionFilesVisitor {
    void *_cache;
    id<DYCaptureStore> _store;
    BOOL _buildDecodedFunctionStreams;
}

- (id)init;
- (id)initWithPlaybackEngineCache:(void *)a0;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (void)visitCaptureStore:(id)a0;
- (void)visitFunctionStreamFile:(id)a0;

@end
